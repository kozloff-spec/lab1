#include <iostream>
#include "windows.h"
#include <time.h>   // для рандома

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 4;
	int num;
	int get;
	srand(time(0)); // для рандома

	
	int random;
	

	while (true) {
		printf("\nНовая Игра!\n");
		random = rand() % 100;
		printf("%d \n", random);
		for (int nn = n; nn > 0; nn--) {

			printf("введите число - ");
			scanf_s("%d", &num);

			if (num > 100 || num < 0) {
				printf("Введите коректное значение! ");
				nn++;
				printf(" ещё %d попыток \n", nn);
				continue;
			}

			if (num == random) {
				printf("Вы угадали!");
				break;
			}
			else if (num < random) {
				printf("ваше число меньше заданного.");
			}
			else {
				printf("ваше число больше заданного.");
			}
			printf(" ещё %d попыток \n", nn);
		}
		printf("\n\n\n");
		
		

	}

}
