#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");

	char name1[11] = "Баландин", name2[11] = "Шишков", name3[11] = "Кравченко";
	char type1 ='С', type2 = 'Ш', type3 ='Д';
	float cnt1 = 123.7, cnt2=79.98, cnt3=134.8;
	int wei1 = 2, wei2 = 3, wei3 = 1;



	/*char name1[11], name2[11], name3[11];
	char type1, type2, type3;
	float cnt1, cnt2, cnt3;
	int wei1, wei2, wei3;


	printf("1. Введите: имя, код, балы, место (г) > \n");
	scanf("%s %c %f %d", name1, &type1, &cnt1, &wei1);

	printf("2. Введіть: назву, тип, кількість, вагу (г) >");
	scanf("%s %c %f %d", name2, &type2, &cnt2, &wei2);

	printf("3. Введіть: назву, тип, кількість, вагу (г) >");
	scanf("%s %c %f %d", name3, &type3, &cnt3, &wei3);*/



	printf("-------------------------------------------------\n");
	printf("|        Ведомость спортивних состязаний |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   Фамилия  |  Код  |Количество  |Место в Итоге|\n");
	printf("|  участника |Команды|балов       |             |\n");
	printf("|------------|-------|------------|-------------|\n");

	printf("| %10s | %5c | %-10.1f | %11d |\n", name1, type1, cnt1, wei1);
	printf("| %10s | %5c | %-10.1f | %11d |\n", name2, type2, cnt2, wei2);
	printf("| %10s | %5c | %-10.1f | %11d |\n", name3, type3, cnt3, wei3);

	printf("|-----------------------------------------------|\n");
	printf("|   Примечание: Д - \"Динамо\", С - \"Спартак\"     |\n");
	printf("|             , Ш - \"Шахтер\"                    |\n");
	printf("-------------------------------------------------\n");

	
}