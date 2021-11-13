#include <iostream>
#include "windows.h"
using namespace std;

int Ar[20];  

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int i;    
	int count = 0;
	int cc = 20;




	srand(time(0));

	for (i = 0; i < cc; Ar[i++] = rand() % 10 - 5);

	printf("Начальный массив:1\n");
	for (i = 0; i < cc; printf("%3d  ", Ar[i++]));
	putchar('\n');

	for (int j = 0; j < cc; j++) {
		if (Ar[j] == (-Ar[(j + 1)])) {
			count++;
		}
	}


	printf("результат:\n");
	cout << count;

	//for (i = 0; i < 100; printf("%3d  ", Ar[i++]));
	putchar('\n');

	return 0;
}