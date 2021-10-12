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
	unsigned int rez;
								
	printf("Введите код состояния (0 - 4) >");
	scanf_s("%hu", &c);
	printf("Введите признак ошибки (0 / 31) >");
	scanf_s("%hu", &f);
	printf("Введите признак занятости (0 / 127) >");
	scanf_s("%hu", &b);
	printf("Введите количество переданных байт (0 - 1) >");
	scanf_s("%hu", &n);

	rez = (c & 0xF) << 13;
	rez |= (f & 0x1F) << 8;
	rez |= (b & 0x7F) << 2;
	rez |= n & 1;


	printf("\n Слово состояния устройства = %04i\n", rez);
	return 0;
}