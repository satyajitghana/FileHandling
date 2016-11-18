//
//  bank.h
//  FileHandling2(classes)
//
//  Created by Satyajit Ghana on 19/08/16.
//  Copyright © 2016 Satyajit Ghana. All rights reserved.
//

#ifndef bank_h
#define bank_h

using namespace std;
class bank {
private:
    int bcode;
    string name;
    float balance;
    int no_of_accts;
public:
    void getdata();
    void putdata();
};

void bank::putdata() {
    cout<<"\nEnter bank code :"; cin>>bcode;
    cout<<"Enter bank name : "; cin>>name;
    cout<<"Enter Balance : "; cin>>balance;
    cout<<"Enter no of accounts in your bank : "; cin>>no_of_accts;
}

void bank::getdata() {
    cout<<"\nBank code :"<<bcode;
    cout<<"\nBank name : "<<name;
    cout<<"\nBalance : "<<balance;
    cout<<"\nNo of accounts in your bank"<<no_of_accts;
}

#endif /* bank_h */
