//
//  main.cpp
//  FileHandling2(classes)
//
//  Created by Satyajit Ghana on 19/08/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "bank.h"

using namespace std;

bank b[2];

void writedata() {
    ofstream fout;
    fout.open("bank.dat", ios::out|ios::binary|ios::ate);
    for (int i=0;i<5;i++) {
        b[i].putdata();
        fout.write((char *)&b[i],sizeof(bank));
    }
    fout.close();
}

void getdata() {
    ifstream fin;
    fin.open("bank.dat", ios::in|ios::binary);
    bank tmp;
   while (!fin.eof()) {
        fin.read((char *)&tmp,sizeof(bank));
        tmp.getdata();
    }
    fin.close();
}


int main(int argc, const char * argv[]) {
    writedata();
    getdata();
    return 0;
}
