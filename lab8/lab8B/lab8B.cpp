#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h> 
using namespace std;

void show(int arr[11],int leng) {
	for (int i = 0; i < leng; i++)
	{
		if (arr[i] < -10) {
			continue;
		}
		cout << arr[i] << " / ";
	}
}

void put(int arr[11], int leng) {
	int NP;
	cout << "введите начальную позицию - ";
	cin >> NP;
	int dl;
	cout << "введите длину к елементов - ";
	cin >> dl;

	if (NP < leng) {
		cout << "\n" << NP << " / " << dl << "\n";
		int arr3[20];
		for (int k = 0; k < NP; k++) {
			arr3[k] = arr[k];
		}
		for (int j = NP; j < NP + dl; j++) {
			arr3[j] = rand() % 10;
		}
		for (int z = NP + dl; z < 11 + dl; z++) {
			arr3[z] = arr[(z - dl)];
		}

		for (int i = 0; i < 20; i++)
		{
			if (arr3[i] < -10) {
				continue;
			}
			cout << arr3[i] << " / ";
		}
	}
	else {
		cout << "error введите коректные значения!";
		put(arr, leng);
	}

	
}

void dele(int arr[11], int leng) {
	int NP;
	cout << "\n введите начальную позицию - ";
	cin >> NP;
	int dl;
	cout << "\n введите длину к елементов - ";
	cin >> dl;
	if (NP + dl < leng) {
		cout << "\n" << NP << " / " << dl << "\n";
		int arr2[11];

		for (int j = 0; j <= leng; j++) {
			if (j >= NP && j < (NP + dl))
				continue;
			arr2[j] = arr[j];
		}
		show(arr2, 11);
	}
	else {
		cout << "error введите коректные значения!";
		dele(arr, leng);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[] = { -2,5,-1,4,1,-3,3,6,8,-6,-4 };
	int leng = sizeof(arr) / sizeof(int);
	show(arr, leng);
	srand(time(0));
	put(arr, leng);
	
	dele(arr, leng);
}