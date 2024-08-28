
#ifndef ALL_MANGEMENU_H
#define ALL_MANGEMENU_H
void menu();
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class ManageMenu {
protected:
    string userName; // hide admin name

public:
    ManageMenu() {
        cout << "\n\n\n\t Enter Your Name to Continue as an Admin: ";
        cin >> userName;

        system("CLS");
        menu();
    }
};
#endif
