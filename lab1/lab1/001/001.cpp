#include <iostream>
#include "windows.h"
using namespace std;

int main(void)
{

	int mass[100];
	for (int i = 0; i < 100; i++) {
		mass[i] = rand() % 100 - 50;
		printf("%3d  ", mass[i]);
	}

}