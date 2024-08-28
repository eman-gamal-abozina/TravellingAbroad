
#include <iostream>
#include <fstream>
#include <string>
#include "booking.h"
#include "customer.h"
#include "caps.h"
#include "charge.h"
#include "mangeMenu.h"
using namespace std;
void menu(){
   int  mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t\t\t* ABC Travels *\n"<<endl;



    cout<<"--------------------------Main Menu-----------------------\n";
    cout<<"-  - - - -  - - - - - - - - - - - - - - - - - - - -- - - - - - \n";
    cout << "\t\t1. Customer Management\n";
    cout << "\t\t2. Cabs Management\n";
    cout << "\t\t3. Bookings Management\n";
    cout << "\t\t4. Charges & Bill\n";
    cout << "\t\t5. Exit\n";
cout<<"\t\t\t----------------------------------------------\n";
    cout << "Enter Your Choice: ";
    cin >> mainChoice;
system("CLS");
customer a2;
caps a3;
booking a4;
charge a7;


if (mainChoice == 1) {
    cout << "--------Customers------\n" << endl;
    cout << "1. Enter New Customer" << endl;
    cout << "2. See Old Customers" << endl;

    cout << "\nEnter Choice: ";
    cin >> inChoice;

    system("CLS"); 
    if(inChoice==1){
        a2.setDetails();

    } 
    else if(inChoice==2){
a2.getDetails();
    }
    else{
         cout << "Invalid input! Redirecting to the previous menu\nPlease Wait!";
                //Sleep(1100);
                system("CLS");
                menu();
    }
    cout<<"Press 1 to redirect to the main menu\n";
    cin>>gotoMenu;
    system("CLS");
    if(gotoMenu==1)
    menu();
    else
    menu();
}
else if(mainChoice==2){

    a3.getDetails();
}
else if(mainChoice==3){
    a4.hotels();
}
else if(mainChoice==4){
    //a7.printBill();

    cout << "Your receipt is already printed you can get it from file path\n" << endl;
    cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";

    cin >> gotoMenu;

    if (gotoMenu == 1) {
        system("CLS");
       // a7.showBill();
        cout << "\nPress 1 to redirect main menu: ";
        cin >> gotoMenu;
        system("CLS");

        if (gotoMenu == 1) 
            menu();
        else 
            menu();
    }
    else
    menu();
}
else if(mainChoice==5){
    cout<<"-------GOOD BYE:)---------\n";

}
else{
       cout << "Invalid input! Redirecting to the previous menu\nPlease Wait!";
                //Sleep(1100);
                system("CLS");
                menu();

}

}
int main(){
    ManageMenu start;
    return 0;
}

