#include <iostream>
#define N 5
#define M 5
using namespace std;

int puting(int arr[N][M]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 10 - 3;
		}
	}

	for (int i = 0; i < N; i++)
	{

		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << "  ";


		}
		cout << "\n";
	}

	return 0;
	
}

void check(int arr[N][M], int c) {
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		
		if (arr[c-1][i] > 0) {
			sum++;
			//cout << arr[c-1][i];
		}

		
	}
	cout << "str" << c << " << " << sum << "\n";
}


int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int c = 0;
    int arr[N][M];
	puting(arr);
	while (true) {		
		cout << "ВВедите какую строку проверить от 1 до 5: ";
		cin >> c;
		if (c <= N && c >= 1) {
			check(arr, c);
			
		}
		else {
			cout << "введите заново!";
			continue;
		}
	}
	/*for (int i = 1; i < N+1; i++)
	{
		check(arr, i);
	}*/
}
