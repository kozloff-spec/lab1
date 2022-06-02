#pragma once
#include "head.h"

void print(mon mm[]) {
	/* Вывод таблицы */
	struct mon x; /* рабочая переменная */
	int n = M;    /* количество элементов в массиве */
	int i, j; /* текущие индексы в массиве */
	int m;    /* индекс минимального элемента */
	printf("-------------------------------------------------\n");
	printf("|   		Ведомость деталей                 |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   Фамилия  |  Код  |Количество  |Место в Итоге|\n");
	printf("|  участника |Команды|балов       |             |\n");
	printf("|------------|-------|------------|-------------|\n");
	/* вывод строк фактических данных */
	for (i = 0; i < n; i++) {
		cout << "| ";
		cout.width(11);
		cout <<mm[i].name;
		printf("|   %c   |  %-9.1f | %11d |\n",
			 mm[i].sc, mm[i].cnt, mm[i].sq);
	}
	printf("------------------------------------------------\n");
	printf("| Примечание: Д - Динамо, С - Спартак,          | \n");
	printf("|   Ш -  Шахтер                                 | \n");
	printf("------------------------------------------------\n");
}

void random(mon mm[])
{
	int name_taken;
	static string name_rand[] = { "shahtar", "dinamo", "barca" };
	

	char letters[3] = { 'x', 's' ,'d' };

	for (int i = 0; i < M; i++)
	{
		mm[i].cnt = rand() % 40 + (40 * (2 - i));
		mm[i].sc = letters[i % 3];
		mm[i].sq = i + 1;
		name_taken = (rand() % 3);
		mm[i].name = name_rand[(rand() % 3)];
	}

	/*mm[10] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[10];*/
}

void put(mon mm[]) {


	for (int i = 0; i < M; ++i) {

		cout << i + 1 << ") Bâåäèòå: íàçâàíèå, òèï, êîëè÷åñòâî, âåñ : ";
		cin >> mm[i].name >> mm[i].sc >> mm[i].cnt >> mm[i].sq;

	}

}



void sort()
{
	cout << "sort\n";
}
