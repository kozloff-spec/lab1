#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"

int main(void) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long n = 0;              /* параметр ряда */
    double dbln;         /* параметр ряда в форме с плавающей точкой */
    double sum = 0;        /* сумма членов ряда */
    double term;         /* значение текущего члена */
    const double eps = 0.000001;  /* предел точности */
    double  k3;
    double  k2;
    double  k1;

    while(true) {
        n++;  
        dbln = n;
        k3 = pow(2, dbln + 1);     // = 2n^(n + 1)
        k2 = pow(2, 2 * dbln) + 1;   // = (2^(2n)) + 1
        k1 = pow(-1, dbln);       //(-1)^n
        term = k1 * k3 / k2;
        sum += term;

        //printf("%ld \n ", n);

        if (n == 9)
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);

        if (fabs(term) <= eps)
            break;

        

       
    }
    printf("Полная сумма ряда = %10.7lf\n", sum);
    return 0;

}