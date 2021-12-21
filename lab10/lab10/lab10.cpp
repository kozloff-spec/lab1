#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
#define M 4

void mod(int arr[M]) {
	int sqr = sqrt(M);
	int arr2[M][M];
	for (int i = 0; i < sqr; i++)
	{
		for (int j = 0; j < sqr; j++)
		{
			arr2[i][j] = arr[((sqr * i) + j)];
			cout << arr2[i][j];
		}
		cout << endl;
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < sqr; i++)
	{
		
		for (int j = 0; j < sqr; j++)
		{		
			sum = 0;
			for (int k = 0; k < sqr; k++) {
				sum += (arr2[i][k] * arr2[k][j]);
				
			}
			arr[(sqr * i + j)] = sum;
		}
	}

	for (int i = 0; i < sqr; i++)
	{
		for (int j = 0; j < sqr; j++)
		{
			arr2[i][j] = arr[((sqr * i) + j)];
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	



}

int main(void) {
	//srand(time(0));
	setlocale(LC_ALL, "Russian");
	int arr[M];
	for (int i = 0; i < M; i++)
	{
		arr[i] = rand() % 9 + 1;
		cout << arr[i] << "  ";
	}
	cout << endl <<  endl;


	mod(arr);
	cout << endl;
	for (int i = 0; i < M; i++)
	{

		cout << arr[i] << "  ";
	}
}
