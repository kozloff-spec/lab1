#include <iostream>
#include "windows.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char c;
	char four = 4;
	char f;
	char b;
	char n;
	unsigned short int UnitStateWord; 
								
	printf("������� ��� ��������� (0 - 4) >");
	scanf_s("%hu", &c);
	printf("������� ������� ������ (0 / 31) >");
	scanf_s("%hu", &f);
	printf("������� ������� ��������� (0 / 127) >");
	scanf_s("%hu", &b);
	printf("������� ���������� ���������� ���� (0 - 1) >");
	scanf_s("%hu", &n);

	UnitStateWord = (c & 0xf) << 13;
	UnitStateWord |= (f & 0x1f) << 8;
	UnitStateWord |= (b & 0x7f) << 2;
	UnitStateWord |= n & 1;


	printf("\n�1���� ��������� ���������� = %04x\n",		UnitStateWord);
	return 0;
}