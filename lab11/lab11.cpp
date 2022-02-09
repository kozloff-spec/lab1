/*
Приклад 2:
Написати функцію, яка виводить всі числа від 1 до N
*/
#include <iostream>
using namespace std;

int fun(int N, int arr[], int sum)
{
	if (N < 0) return sum;
	if ((N != 0 ) && (N % 2 == 0))sum += arr[N];
	fun(N - 1, arr, sum);
}

int main()
{
	int N = 4;
	int arr[] = { 4, 2, -10, 1, -3 };
	// Виклик рекурсивної функції
	while (true)
	{
		cout << "Input N : ";
		cout << endl;

		cout << fun(N, arr, 0);

		cout << endl;
		system("pause");
		system("cls");
	}
	return 0;
}