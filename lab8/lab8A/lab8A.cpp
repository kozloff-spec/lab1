#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;




int main() {

	setlocale(LC_ALL, "Russian");
	
	int arr[10] = {};
	int arrindex[2] = { 0,5 };
	int arrsize = (sizeof(arr) / sizeof(int));
	int answer;

	while (true) {

		cout << "\nВы курите? 1 - да , 0 - нет\n";
		cin >> answer;
		if (answer == 1) {
			if (arrindex[0] <= 5) {
				cout << "мы забранировали. Ваше место - " << arrindex[0];
				arr[arrindex[0]] = 1;
				arrindex[0]++;				
			}
			else {
				cout << "мест нету!";
			}
		}else if(answer == 0){
			if (arrindex[1] <= 10) {
				cout << "мы забранировали. Ваше место - " << arrindex[1];
				arr[arrindex[1]] = 1;
				arrindex[1]++;
			}
			else {
				cout << "мест нету!";
			}
		}
		else {
			cout << "введите ответ в формате 1/0";
		}
		if (arrindex[0] >= 5 & arrindex[1] >= 10)
			break;
			
	}
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " | ";
	}


	system("PAUSE");



}