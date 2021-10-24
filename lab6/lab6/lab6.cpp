#include <iostream>
using namespace std;

int main()
{
    long n;
    double dbln;
    double  sum = 0;
    double term;
    const double lim = 0.0000000001;
    double  k1 = 1;
    //long k3 = 1, k2 = 1;

    for (; ; n++) 
    {
        k1 = pow(-1, n);
        dbln = n;
        term = k1 * (n*n + 1) / (n*n* n + 3);
        if (fabs(term) >= lim)
        {
            sum += term;
        }
        else
        {
            break;
        }
        if (n == 9)
        {
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);  // -2,64166
        }
    }
    printf("Полная сумма ряда = %10.7lf\n", sum);

    printf("%ld", n);



    return 0;
}