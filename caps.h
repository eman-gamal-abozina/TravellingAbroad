#ifndef CAPS_H
#define CAPS_H
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <synchapi.h>

using namespace std;
void menu();
class caps{
private :
    int  cabchoice;
float kilometers;
 float capcost;
public:
 float getCapcost(){
    return capcost;
}

    void getDetails(){
            cout<<" We collaborated with fastest, safest, and smartest cab service arround the country\n" ;
            cout<<" ABC Cabs \n"<< endl ;
            cout<<" 1. Rent a Standard Cab Rs.15 for 1KM\n";
            cout<<" 2. Rent a Luxury Cab Rs.25 per 1KM\n" ;
            cout<<"\n To calculate the cost of your journey : \n";
            cout<<"Enter which type of cab do you need\n";
cin>>cabchoice;
cout<<"Enter kilometers you have to travel :\n";
cin>>kilometers;
int hirecab;
if(cabchoice==1){
capcost=kilometers*15;
    cout<<"Your tour costs : "<< capcost<<" for a Standard cap\n";
    cout<<"Press 1 to hire this cap : or\n";
    cout<<"Press 2 to hire another cap\n";
    cin>>hirecab;
    system (" CLS") ;
    if ( hirecab == 1) {
        cout << " \nYou have successfully hired a Standard cab" << endl;
        cout << " Goto Menu and take the receipt" << endl;
    }
    else if ( hirecab == 2) {
        getDetails();
    }
     else{
    cout<<" Invalid Input! Redirecting to previous menu \nPlease Wait!"<< endl ;
    Sleep ( 999) ; system ("");
    menu();
}

}
else if (cabchoice==2){
   capcost=kilometers*25;
    cout<<"Your tour costs : "<< capcost<<" for a Luxury cap\n";
    cout<<"Press 1 to hire this cap : or\n";
    cout<<"Press 2 to hire another cap\n";
    cin>>hirecab;
    system (" CLS") ;
    if ( hirecab == 1) {
        cout << " \nYou have successfully hired a Standard cab";
        cout << "\n Goto Menu and take the receipt" << endl;
    }
    else if ( hirecab == 2) {
        getDetails();
    }

}
    }

};
#endif