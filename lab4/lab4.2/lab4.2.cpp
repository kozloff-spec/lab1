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
								
	printf("������� ��������� \n");
	printf("(16-������ ����� �� 0 �� 0xFFFF) >");
	scanf_s("%hx", &UnitStateWord);


	c = (UnitStateWord >> 13) & 0xf;
	f = (UnitStateWord >> 8) & 0x1f;
	b = (UnitStateWord >> 2) & 0x7f;
	n = UnitStateWord & 1;



	printf("\n ����� ������ = %hu\n", c);
	printf("����� ���������� � ������ = %hu\n", f);
	printf("��� ��������� = %hu\n", b);
	printf("������� ��������� ���������� = %hu\n", n);
	return 0;
}