#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

void switcher(int mushroom) {
    switch (mushroom % 10)
    {
    case 1:
        printf("� ���� %d ����", mushroom);
        break;
    case 2:
    case 3:
    case 4:
        printf("� ���� %d �����", mushroom);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9: 
    case 0:
        printf("� ���� %d ������", mushroom);
        break;
    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int mushroom;
    while (true) {
        printf("\n������� � ��� ������? ");
        scanf("%d", &mushroom);


        if (mushroom > 0) {
            switch (mushroom) {
                case 11:
                case 12: 
                case 13:
                case 14:
                    printf("� ���� %d ������", mushroom);
                    break;
                default:
                    switcher(mushroom);
                    break;
            }

        }
    }
}

