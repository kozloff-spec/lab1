#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

void to2(int z, int * k,int max,int ** arr,int zz) {
	int mm = 0;
	for (int i = 0; i < zz; i++)
	{
		arr[i] = new int[max];
		for (int j = 0; j < zz; j++)
		{
			arr[i][j] = k[(zz*i) + j];
		}
		mm++;
	}

	for (int i = 0; i < zz; i++) {
		for (int j = 0; j < zz; j++) {
			cout << arr[i][j] << " I ";
		}
		cout << "\n";
	}
}

void to2x2(int z,int ** arr2, int* k, int max, int** arr, int zz) {
	
	for (int i = 0; i < zz; i++)
	{
		arr2[i] = new int[max];
		for (int j = 0; j < zz; j++)
		{
			arr2[i][j] = 0;
		}
	}

	int sum = 0;
	for (int i = 0; i < zz; i++)
	{
		for (int j = 0; j < zz; j++)
		{
			sum = 0;
			for (int z = 0; z < zz; z++) {
				sum += arr[i][z] * arr[z][j];
				//cout << arr[i][z] << " # " << arr2[z][j]<< " = "<<sum<<"\n";
			}
			arr2[i][j] = sum;
		}

	}

	for (int i = 0; i < zz; i++) {
		for (int j = 0; j < zz; j++) {
			cout << arr2[i][j] << " I ";
		}
		cout << "\n\n";
	}
}

int main(void) {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int z;
	while (true) {
		cout << "введите кол-во елементов для кв-тной матрицы";
		cin >> z;
		if ( z == 4 || z == 9 || z == 16 || z == 25) {
			break;
		}
		else {
			cout << "неверное кол-во елементов введите:4,9,16,25\n";
			continue;
		}
	}
	int* k = new int[z];
	for (int i = 0; i < z; i++)
	{
		k[i] = rand() % 10;
	}
	for (int i = 0; i < z; i++)
	{
		cout << k[i] << " I ";
	}
	cout << "\n\n";
	int max = 0;
	for (int i = 2; i <= (z/2); i++) {
		if((z%i) == 0)
			max = i;
	}
	//cout << max;

	
	int** arr = new int* [(z / max)];
	int zz = sqrt(z);
	to2(z,k,max,arr,zz);

	
	cout << "\n\n";

	int** arr2 = new int* [(z / max)];
	to2x2(z, arr2, k, max, arr,zz);
	int mm = 0;
	for (int i = 0; i < zz; i++) {
		
		for (int j = 0; j < zz; j++) {
			
			k[mm] = arr2[i][j];
			mm++;
		}
		cout << "\n\n";
	}

	for (int i = 0; i < z; i++)
	{
		cout << k[i] << " I ";
	}
	cout << "\n\n";
}
