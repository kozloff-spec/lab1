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
								
	printf("Введите код состояния (0 - 4) >");
	scanf_s("%hu", &c);
	printf("Введите признак ошибки (0 / 31) >");
	scanf_s("%hu", &f);
	printf("Введите признак занятости (0 / 127) >");
	scanf_s("%hu", &b);
	printf("Введите количество переданных байт (0 - 1) >");
	scanf_s("%hu", &n);

	UnitStateWord = (c & 0xf) << 11;
	UnitStateWord |= (f & 0x1f) << 9;
	UnitStateWord |= (b & 0x7f) << 8;
	UnitStateWord |= n & 1;

	printf("\nС1лово состояния устройства = %05\d\n",		UnitStateWord);
	return 0;
}