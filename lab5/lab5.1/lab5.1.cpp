#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    float a, b, c;
    setlocale(LC_ALL, "Russian");

    printf("\n������� � - ");
    scanf("%f", &a);

    printf("\n������� b - ");
    scanf("%f", &b);

    printf("\n������� c - ");
    scanf("%f", &c);

    float D = (b * b) - (4*a*c) ;
    if (D < 0) {
        printf("\n������� � ������� ��������� ���� ������������� - ");
    }
    else if (D == 0) {
        float x1 = (-b) / (2 * a);
        printf("\nx1 = %f\n", x1);
    }
    else {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);
        printf("\nx1 = %f\n", x1);
        printf("\nx2 = %f\n", x2);
    }
    printf("d = %f", D);
}

