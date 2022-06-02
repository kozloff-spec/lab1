
#include "heads.h"
#include "functions.cpp"


int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    mon mm[4];

    int action;
    while (true) {


        #ifdef DEBUG
            cout << __DATE__ << endl;
            cout << __TIME__ << endl;
        #else 
            cout << __func__ << endl;
            cout << __FILE__ << endl;
        #endif

            cout << "1 – случайным, 2 - ввод с экран, 3 – сортировка, 4 – печать";
            cin >> action;

            if (action == 1) {
                #ifndef PRINT_TYPE 
                                print(mm);
                #else 
                                random(mm);
                #endif
            }
    }
}

