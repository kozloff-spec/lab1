#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include "math.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double x,y;
	double a = 12.5, b = 1.3; 
	double t1,t2;     

	printf("¬ведите x, y >");
	scanf("%lf %lf", &x, &y);

	double yx = y / x;

	if (x == 0 || y == 0) {
		printf("x не должен ран€тьс€ 0 \n");
		main();
	}
	else {


		t1 = a * ((1 / (b * b * y)) + (1 / (a * b * b * x)) - ((2 / b * b * b) * log(yx)));

		double ax = (a * x) / 2;
		t2 = (1 / (2 * a)) * pow(tan(ax), -1) + (1 / (6 * a)) * pow(tan(ax), -3);

		double xx = tan(0);
		printf("t1 = %lg\n", t1);
		printf("t2 = %lg\n", t2);
		printf("xx = %lg\n", xx);
	}
	return 0;
}