#include <iostream>
#include "windows.h"
#include "math.h"


int main() {

	setlocale(LC_ALL, "Russian");

	short n;        /* параметр внешнего цикла */
	double x, y;    /* абсцисса и ордината графика */
	short h;        /* позиция точки на экране */
	float temp = 0;
	int line = 0;
	/* внешний цикл - для 5 периодов */
	for (n = 0; n < 5; n++) {
		/* вывод заголовка таблицы */
		printf("|   x   |      y    |\n");
		printf("|-------|------------|\n");
		/* внутренний цикл для одного периода */
		for (x = 0; x < 4; x += 0.25) {
			/* 1-й отрезок */
			if (x < 2) y = sqrt((4 - (x - 2
				
				) * (x - 2)));
			else if (x == 2) line = 1;
			/* 2-й отрезок */
			else if (x < 3) y = -sqrt(1 - (x - 3) * (x - 3)) ;
			else if (x == 3) line = 2;
			///* 3-й отрезок */
			else y = 0;
			/* вывод строки таблицы */
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			/* определение позиции точки */
			h = (y + 2) * 10;			// Объяснить зачем
			//if (y - 1 - h * 10 > 0.5) h++; // Здесь ошибка, исправить
			/* вывод точки графика */
			if (line == 0) {
				for (; h > 0; h--) printf(" ");
				printf("*\n");
			}
			else if(line == 1) {
				for (; h > 0; h--) {
					if (h < 20) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
				printf("*\n");
				line = 0;
			}
			else if (line == 2) {
				for (; h > -10; h--) {
					if ( h < 1) {
						printf("*");
					}
					else {
						printf(" ");
					}
				}
				printf("*\n");
				line = 0;
			}
		}  /* конец внутреннего цикла */
	  /* пауза до команды оператора */
		printf("Нажмите клавишу Enter...");
		getchar();
	}  /* конец внешнего цикла */
	return 0;
}