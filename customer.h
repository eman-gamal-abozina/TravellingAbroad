
#ifndef HADHOOD_PROJECT_CUSTOMER_H
#define HADHOOD_PROJECT_CUSTOMER_H

#include <iostream>
#include <fstream>
#include <string>

#include <bits/stdc++.h>
using namespace std;
void menu();
class customer{
    string name;
    string adress;
    string mobileNo;
    int age;
     int cusID;
public:
 char all[999];
 int getcuID(){
    return cusID;
}
    customer(){
        name="";
        adress="";
        mobileNo="";
        age=0;
        cusID=0;
    }
    customer(string name,string adress,string mobileNo,int age,int cusID){
        this->name=name;
        this->adress=adress;
        this->mobileNo=mobileNo;
        this->age=age;
        this->cusID=cusID;
    }
    void setDetails() {
        cout << "Enter customer Name";
        cin >> name;
        cout << "Enter customer ID: ";
        cin >> cusID;
        cout << "Enter customer Adress";
        cin >> adress;
        cout << "Enter customer MobilePhone";
        cin >> mobileNo;
        cout << "Enter customer Age";
        cin >> age;
    }
    void getDetails() {
        ofstream out("old-customers.txt", ios::app); {
            cout << "Enter customer Name";
            cin >> name;
            cout << "Enter customer ID: ";
            cin >> cusID;
            cout << "Enter customer Adress";
            cin >> adress;
            cout << "Enter customer MobilePhone";
            cin >> mobileNo;
            cout << "Enter customer Age";
            cin >> age;
        }
        out << "Customer ID: " << cusID << endl;
        out << "Name: " << name << endl;
        out << "Age: " << age << endl;
        out << "Mobile Number: " << mobileNo << endl;
        out << "Address: " << adress << endl;
        cout << "\nSAVED \nNOTE: We save your details record for future purposes\n" << endl;
        out.close();


    }


    void showDetails() {
        ifstream in("old-customers.txt");
        {
            if (!in) {
                cout<<"File Error\n ";
            }
            while(!(in.eof())) {
                in.getline(all, 999);
                cout << all << "\n";
            }
            in.close();
        }

    }

}

;


#endif
