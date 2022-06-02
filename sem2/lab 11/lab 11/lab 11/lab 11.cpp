/*
Приклад 2:
Написати функцію, яка виводить всі числа від 1 до N
*/
#include <iostream>
using namespace std;

void fun(int N, int arr[])
{
	
	if (N < 0) return ;
	

	fun(N - 1, arr);
	if ((N != 0) && (N % 2 == 0)) {
		cout << arr[N] << "   ";
	}
	
}

int main()
{

	int arr[] = { 4, 2, -10, 1, -3,3,-4 };
	int N = sizeof(arr)/sizeof(int) - 1;
	// Виклик рекурсивної функції
	while (true)
	{
		
		cout << endl;

		 fun(N, arr);

		cout << endl;
		system("pause");
		system("cls");
	}
	return 0;
}