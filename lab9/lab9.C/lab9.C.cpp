#include <iostream>
#include "windows.h"

using namespace std;

int main(void)
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	cout << "ВВедите высота первого масива";
	int k;
	cin >> k;
	cout << "ВВедите ширину первого масива";
	int h;
	cin >> h;
	int** arr = new int*[k];
	for (int i = 0; i < k; i++)
	{
		arr[i] = new int[h];
		for (int j = 0; j < h; j++)
		{
			arr[i][j] = rand() % 10;
		}
		
	}

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < h; j++) {


			printf("%4d", arr[i][j]);
			
		}
		printf("\n");
	}

	
	cout << "ВВедите высота 2го масива";
	int k2;
	cin >> k2;
	cout << "ВВедите ширину 2го масива";
	int h2;
	cin >> h2;

	int** arr2 = new int* [k2];
	for (int i = 0; i < k2; i++)
	{
		arr2[i] = new int[h2];
		for (int j = 0; j < h2; j++)
		{
			arr2[i][j] = rand() % 10;
		}

	}

	for (int i = 0; i < k2; i++) {
		for (int j = 0; j < h2; j++) {


			printf("%4d", arr2[i][j]);

		}
		printf("\n");
	}

	int sum = 0;
	if (h == k2) {
		int** arr3 = new int* [k];
		
		for (int i = 0; i < k; i++)
		{
			
			arr3[i] = new int[h2];
			for (int j = 0; j < h2; j++)
			{
				sum = 0;
				for (int z = 0; z < h; z++) {
					sum += arr[i][z] * arr2[z][j];
					//cout << arr[i][z] << " # " << arr2[z][j]<< " = "<<sum<<"\n";
				}
				arr3[i][j] = sum;
			}

		}

		cout << "rez =" << "\n";
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < h2; j++) {


				printf("%4d", arr3[i][j]);

			}
			printf("\n");
		}
	}
	else {
		cout << "длина первого массива должна раняться высоте сторого! ";
	}


}