#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_elements 3


#define PRINT_TYPE
//#define DEBUG

struct Details {

    string name;
    char type;
    int count;
    float weight;

};


int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Details det[4];


    //menu system 
    int menu_button;
    while (true) {

#ifdef DEBUG
        cout << __DATE__ << endl;
        cout << __TIME__ << endl;
#else 
        cout << __func__ << endl;
        cout << __FILE__ << endl;
#endif

        cout << " 1 - Ввод 2 – сортировка, 3 – печать, 0 - завершить роботу ";
        cin >> menu_button;

        if (menu_button == 1) {

#ifndef PRINT_TYPE 
            cout << "print";
#else 
            cout << "random";
#endif
        }
       


    return 0;
}