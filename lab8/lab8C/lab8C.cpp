#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include "math.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int num;
    int step = 1;
    int arr[8];
    int const N = sizeof(arr) / sizeof(int);
    int l;
    int sum= 0;
    cout << "Введите число!";
    cin >> num;
    while (true) {
        l = (pow(10, step));
        
        
        cout << ((num % l)-(num% (l/10)))/(l/10)<< "\n";
        arr[(step - 1)] = ((num % l) - (num % (l / 10))) / (l / 10);
        sum += ((num % l) - (num % (l / 10))) / (l / 10);
        step++;
        

        if (num - (num % l) == 0) {
            cout << " кол-во знаков - " << step-1 << "\n";
            cout << " сума - " << sum << "\n";
            break;
        }
    }
    num = 0;
    for (int i = 0; i < step-1; i++) {

        num += (arr[i] * (pow(10,step-i-2))) ;
    }

    cout << "обратное число - " << num;
    
	
}

