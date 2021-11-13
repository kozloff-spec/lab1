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

	short l, r;  /* ������� ������� */
	short r1, r2; /* ��������� ������ �������� */
	short dd;    /* ����������� ��������� ������� */
	short k;     /* ������� ���� �� */
	 /* ��������� �������� ���������� */
	r1 = 1; r2 = S - 2; dd = 1; k = 1;
	for (l = 0; l < S; l++) {  /* ������� ����� */
		for (r = 0; r < S; r++)  /* ������� �������� */
		  /* ������� ���������� �������� */
			 Ar[l][r] = rand()  % 19 + 1;
		/* ����� �������� ����� */
	  /* ����������� ������ */
		r1 += dd; r2 -= dd;
		/* ������ �������� � ������ ����� */
		if (r1 > r2) dd = -dd;
	} /* ����� �������� �������� */


  /* ����� ������� */
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