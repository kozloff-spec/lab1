#include <iostream>
#include "windows.h"
#define S 9
using namespace std;

int Ar[S][S]; /* матрица */
int Couter[9][11];

void show(int Ar[9][9], short l, short r) {
	for (l = 0; l < S; l++) {
		for (r = 0; r < S; r++) {


			printf("%4d", Ar[l][r]);
			if (l == r)
				printf("|");
		}
		printf("\n");
	}
}

int main(void)
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");

	short l, r;  /* текущие индексы */
	short r1, r2; /* граничные номера столбцов */
	short dd;    /* модификатор граничных номеров */
	short k;     /* текущий член ЛП */
	int sum = 0;
	/* начальные значения переменных */
	r1 = 1; r2 = S - 2; dd = 1; k = 1;
	for (l = 0; l < S; l++) {  /* перебор строк */
		for (r = 0; r < S; r++)  /* перебор столбцов */
		  /* условие ненулевого значения */
			if (l == r) Ar[l][r] = 0;
			else Ar[l][r] = rand() % 10;
		/* конец перебора строк */
	  /* модификация границ */
		r1 += dd; r2 -= dd;
		/* уловие перехода в нижнюю часть */
		if (r1 > r2) dd = -dd;
	} /* конец перебора столбцов */


	show(Ar, l, r);

	cout << "\n";

	int j = 0;

	r1 = 1; r2 = S - 2; dd = 1; k = 1;
	for (l = 0; l < S; l++) {  /* перебор строк */
		for (r = 0; r < S; r++)  /* перебор столбцов */
		  /* условие ненулевого значения */
			if (l == r && r != 8 && r != 0) {
				sum = 0;
				j = 0;
				if (l >= 5) {
					for (int i = 0; i < 9-l; i++) {

						j++;
						sum += Ar[l + i][l - i];
						sum += Ar[l - i][l + i];

						Couter[l][j] = Ar[l + i][l - i];
						j++;
						Couter[l][j] = Ar[l - i][l + i];
					}
				}
				else {
					for (int i = 0; i <= l; i++) {
						j++;
						sum += Ar[l + i][l - i];
						sum += Ar[l - i][l + i];

						Couter[l][j] = Ar[l + i][l - i];
						j++;
						Couter[l][j] = Ar[l - i][l + i];
					}
				}
				Ar[l][r] = sum;
			}

		/* конец перебора строк */
	  /* модификация границ */
		r1 += dd; r2 -= dd;
		/* уловие перехода в нижнюю часть */
		if (r1 > r2) dd = -dd;
	} /* конец перебора столбцов */
	show(Ar, l, r);

	cout << "\n";

	int summ = 0;
	for (l = 0; l < S; l++) {
		for (r = 0; r < S; r++) {

			if (Couter[l][r] != 0) {
				printf("%5d", Couter[l][r]);
			}
			if (r != 8 && Couter[l][r] != 0) {
				cout << "+";
			}
			else {
				summ = 0;
				for (int i = 10; i > 0; i--) {
					summ += Couter[l][i];
				}

				
			}

		}
		if (sum != 0) {
			cout << " = " << summ;
		}
		printf("\n");
	}



}