//
//  material.h
//  FileHandling2(classes)
//
//  Created by Satyajit Ghana on 18/11/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef material_h
#define material_h

using namespace std;

class material {
    int no,qty;
    char name[10];
public:
    void putdata();
    void getdata();
    void change();
};

void material::getdata() {
    cout<<"\nEnter Number : "; cin>>no;
    cout<<"Enter Quantity : "; cin>>qty;
    cout<<"Enter Name : "; cin>>name;
}

void material::putdata() {
    cout<<"\nNumber : "<<no;
    cout<<"\nQuantiy :"<<qty;
    cout<<"\nName : "<<name;
}

#endif /* material_h */
