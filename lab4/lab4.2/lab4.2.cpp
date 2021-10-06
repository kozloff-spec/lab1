#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short c; 
	unsigned short f; 
	unsigned short b; 
	unsigned short n; 
	unsigned  int UnitStateWord; 
								
	printf("Введите кодировку \n");
	printf("(16-ричное число от 0 до 0xFFFF) >");
	scanf_s("%hd", &UnitStateWord);


	c = (UnitStateWord >> 11) & 0x4;
	f = (UnitStateWord >> 9) & 0x1f;
	b = (UnitStateWord >> 8) & 0x7f;
	n = UnitStateWord & 1;



	printf("\n номер канала = %hu\n", c);
	printf("номер устройства в канале = %hu\n", f);
	printf("код состояния = %hu\n", b);
	printf("признак занятости устройства = %hu\n", n);
	return 0;
}