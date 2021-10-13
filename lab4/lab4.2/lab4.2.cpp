#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main(void) {
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	setlocale(LC_ALL, "Russian");

	unsigned short c; 
	unsigned short f; 
	unsigned short b; 
	unsigned short n; 
	unsigned int rez;
								
	printf("Введите кодировку \n");
	printf("(16-ричное число от 0 до 0xFFFF) >");
	scanf_s("%u", &rez);


	c = (rez >> 13) & 0xF;
	f = (rez >> 8) & 0x1F;
	b = (rez >> 2) & 0x7F;
	n = rez & 1;



	printf("\n номер канала = %hu\n", c);
	printf("номер устройства в канале = %hu\n", f);
	printf("код состояния = %hu\n", b);
	printf("признак занятости устройства = %hu\n", n);
	return 0;
}