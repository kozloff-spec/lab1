#include "head.h"
#include "head.cpp"

int main()
{

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int menu_button;
    while (true) {

        cout << "1 –заполнить масив, 2 - напечатать массив, 3 – поменять, 4 – новій массив, 0 - Exit ";
        cin >> menu_button;
        int arr[size];
        int new_ar[size];

        if (menu_button == 1) {
            random(arr);
        }
        else if (menu_button == 2) {
            print(arr);
        }
        else if (menu_button == 3) {
            max_elem(arr);
        }
        else if (menu_button == 4) {
            new_arr(arr, new_ar);
        }
        else if (menu_button == 0) {
            exit(0);
        }
    }
}
