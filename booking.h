#ifndef BOOKING_H
#define BOOKING_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <synchapi.h>

using namespace std;
void menu();
class booking{
    int hotelchoice;
    int package;
    float hotelcost;
public:
float gethotelcost(){
    return hotelcost;
}
    void hotels() {
        vector<string> hotelname = {"Larva", "Cyko", "Haway"};
        for (int i = 0; i < 3; i++) {
            cout << (i + 1) << "." << hotelname[i] << "\n";
        }
        cout << "Currently we collaborate with the hotels above ..\n";
        cout << " Enter number of the hotel you wanna book or\nPress any key to back \n";
        cin >> hotelchoice;
        system("CLS");

        if (hotelchoice == 1) {
            cout << "----WELCOME TO LARVA HOTEL----\n" << endl;
            cout
                    << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun."
                    << endl;


            cout << "Packages offered by Larva:\n" << endl;

            cout << "1. Standard package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;

            cout << "2. Premium package" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;

            cout << "3. Luxury package" << endl;
            cout << "\tLive a Luxury at Larva: Rs.15000.00\n";
            cout << "\nEnter the package number or\npress another key if you wanna back\n";
            cin >> package;
            if (package == 1) {
                hotelcost = 5000;
                cout << "You have successfully book Standard package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 2) {
                hotelcost = 10000;
                cout << "You have successfully book Premium package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 3) {
                hotelcost = 15000;
                cout << "You have successfully book Luxury package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";

            } else {
                cout << "Invalid input! Redirecting to the previous menu\nPlease Wait!";
                 Sleep(1100);
                system("CLS");
                hotels();
            }
        }


        if (hotelchoice == 2) {
            cout << "----WELCOME TO CYKO HOTEL----\n" << endl;
            cout
                    << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun."
                    << endl;


            cout << "Packages offered by Cyko:\n" << endl;

            cout << "1. Standard package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.8000.00" << endl;

            cout << "2. Premium package" << endl;
            cout << "\tEnjoy Premium: Rs.12000.00" << endl;

            cout << "3. Luxury package" << endl;
            cout << "\tLive a Luxury at Larva: Rs.18000.000\n";
            cout << "\nEnter the package number or\npress another key if you wanna back\n";
            cin >> package;
            if (package == 1) {
                hotelcost = 8000;
                cout << "You have successfully book Standard package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 2) {
                hotelcost = 12000;
                cout << "You have successfully book Premium package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 3) {
                hotelcost = 180000;
                cout << "You have successfully book Luxury package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";

            } else {
                cout << "Invalid input! Redirecting to the previous menu\nPlease Wait!";
                Sleep(1100);
                system("CLS");
                hotels();
            }
        }


        if (hotelchoice == 3) {
            cout << "----WELCOME TO HAWAY HOTEL----\n" << endl;
            
                  cout  << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun."
                    << endl;


            cout << "Packages offered by Haway:\n" << endl;

            cout << "1. Standard package" << endl;
            cout << "\tAll basic facilities you need just for: Rs.25000.00" << endl;

            cout << "2. Premium package" << endl;
            cout << "\tEnjoy Premium: Rs.100000.00" << endl;

            cout << "3. Luxury package" << endl;
            cout << "\tLive a Luxury at Larva: Rs.125000.00\n";
            cout << "\nEnter the package number or\npress another key if you wanna back\n";
            cin >> package;
            if (package == 1) {
                hotelcost = 25000;
                cout << "You have successfully book Standard package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 2) {
                hotelcost = 100000;
                cout << "You have successfully book Premium package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";
            } else if (package == 3) {
                hotelcost = 125000;
                cout << "You have successfully book Luxury package in Larva Hotel\n";
                cout << "Go to the menu to take your receipt\n";

            } else {
                cout << "Invalid input! Redirecting to the previous menu\nPlease Wait!";
                Sleep(1100);
                system("CLS");
                hotels();
            }
            cout<<"Press 1 to redirect to the main menu\n";
        }

    }

};
#endif
