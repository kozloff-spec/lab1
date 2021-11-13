#include <iostream>
#include "windows.h"
#define S 9
using namespace std;

int Ar[S][S];
int ArMax[S][S];

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short l, r;  /* текущие индексы */
	short r1, r2; /* граничные номера столбцов */
	short dd;    /* модификатор граничных номеров */
	short k;     /* текущий член ЛП */
	 /* начальные значения переменных */
	r1 = 1; r2 = S - 2; dd = 1; k = 1;
	for (l = 0; l < S; l++) {  /* перебор строк */
		for (r = 0; r < S; r++)  /* перебор столбцов */
		  /* условие ненулевого значения */
			 Ar[l][r] = rand()  % 19 + 1;
		/* конец перебора строк */
	  /* модификация границ */
		r1 += dd; r2 -= dd;
		/* уловие перехода в нижнюю часть */
		if (r1 > r2) dd = -dd;
	} /* конец перебора столбцов */


  /* вывод матрицы */
	for (l = 0; l < S; l++) {
		for (r = 0; r < S; r++) {
			printf("%3d", Ar[l][r]);
		}
		printf("\n");
	}
	cout << "\n\n";


	int max = 0;
	int c;
	
	for (l = 0; l < S; l++) {
		max = 0;
		 for (r = 0; r < S; r++) {
			 ArMax[l][r] = Ar[l][r];
			 if (Ar[l][r] > Ar[l][max]) {
				 max = r;
			 }
		}
		 c = ArMax[l][0];
		 ArMax[l][0] = ArMax[l][max];
		 ArMax[l][max] = c;
	
	}


	for (l = 0; l < S; l++) {
		for (r = 0; r < S; r++) {
			printf("%3d", ArMax[l][r]);
		}
		printf("\n");
	}
	cout << "\n\n";


	return 0;
}