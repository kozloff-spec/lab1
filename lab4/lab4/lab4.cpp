#include <iostream>
#include "windows.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; 
	unsigned short f; 
	unsigned short b; 
	unsigned short n; 
	unsigned int UnitStateWord; 
								
	printf("������� ��� ��������� (0 - 4) >");
	scanf_s("%hu", &c);
	printf("������� ������� ������ (0 / 31) >");
	scanf_s("%hu", &f);
	printf("������� ������� ��������� (0 / 127) >");
	scanf_s("%hu", &b);
	printf("������� ���������� ���������� ���� (0 - 1) >");
	scanf_s("%hu", &n);

	UnitStateWord = (c & 0xf) << 11;
	UnitStateWord |= (f & 0x1f) << 9;
	UnitStateWord |= (b & 0x7f) << 8;
	UnitStateWord |= n & 1;

	printf("\n�1���� ��������� ���������� = %05\d\n",		UnitStateWord);
	return 0;
}