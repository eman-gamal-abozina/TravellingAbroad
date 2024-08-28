//#pragma once
void menu();
#include "booking.h"
#include "customer.h"
#include "caps.h"
#include<fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class charge:public customer,booking,caps{
    void printBill(){

ofstream outf("receipt.txt");{

    outf << "------------------------------------" << endl;
    outf << "            ABC Travel Agency       " << endl;
    outf << "            -----Receipt-----       " << endl;
    outf << "------------------------------------" << endl << endl;

    outf << "Customer ID: " << getcuID()<< endl;
    outf << "Description\t\tTotal" << endl;
    outf << "Hotel cost:\t\t" << fixed << setprecision(2) <<gethotelcost()<<endl;
    outf << "Travel (cab) cost:\t" << fixed << setprecision(2) ; 
 cout<< getCapcost() << endl;
    outf << "Total Charge:\t\t" << fixed << setprecision(2) << gethotelcost() + getCapcost() << endl;
    outf << "------------------------------------" << endl;
    outf << "            THANK YOU            " << endl;
}

    outf.close();

    }
    void showBill(){
        ifstream inf("old-customers.txt");
        {
            if (!inf) {
                cout<<"File Error\n ";
            }
            while(!(inf.eof())) {
                inf.getline(all, 999);
                cout << all << "\n";
            }
            inf.close();
        }
    }
    };