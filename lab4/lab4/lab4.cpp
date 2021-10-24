#include <iostream>
#include "windows.h"
using namespace std;

int main() {
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	setlocale(LC_ALL,"Russian");

	unsigned short c;
	unsigned short f; 
	unsigned short b;
	unsigned short n;
	unsigned char four = 4;
	unsigned int rez;
								
	printf("Введите код состояния (0 - 7) >");
	scanf_s("%hu", &c);
	printf("Введите признак ошибки (0 / 31) >");
	scanf_s("%hu", &f);
	printf("Введите признак занятости (0 / 63) >");
	scanf_s("%hu", &b);
	printf("Введите количество переданных байт (0 - 1) >");
	scanf_s("%hu", &n);

	//rez = (c & 0x04) << 13;
	rez = (c & 7) << 13;
	rez |= (f & 31) << 8;
	rez |= (b & 63) << 2;
	rez |= n & 1;
	
	printf("\n Слово состояния устройства = %04x\n", rez);
	return 0;
}