#include <iostream>

void success() {
    printf_s("точка попала в площадь");
}

void error() {
    printf_s("точка не попала в площадь");
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float x = 2, y = 3;
    printf_s("Введите x,y");
    scanf_s("%f %f", &x,&y);
    if (x >= 0) {
        if ((x * x) + (y * y) <= 1) {
            success();
        }
        else
            error();
    }
    else {
        if (x <= 1 && y <= 1) {
            success();
        }
        else
            error();
    }


}