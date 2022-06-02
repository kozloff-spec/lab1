#include "heads.h"

void sort(mon mm[]) {

	for (int i = 0; i < M; i++)
	{
		if (mm[i].sq != i + 1) {
			if (mm[i].sq == 1) {
				mm[10] = mm[0];
				mm[0] = mm[i];
				mm[i] = mm[10];
			}
		}
		if (mm[i].sq == 2) {
			mm[10] = mm[1];
			mm[1] = mm[i];
			mm[i] = mm[10];
		}
		if (mm[i].sq == 3) {
			mm[10] = mm[2];
			mm[2] = mm[i];
			mm[i] = mm[10];
		}

	}
}
void print(mon mm[]) {
	/* Вывод таблицы */
	struct mon x; /* рабочая переменная */
	int n = M;    /* количество элементов в массиве */
	int i, j; /* текущие индексы в массиве */
	int m;    /* индекс минимального элемента */
	printf("-------------------------------------------------\n");
	printf("|   		Ведомость деталей                   |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   Фамилия  |  Код  |Количество  |Место в Итоге|\n");
	printf("|  участника |Команды|балов       |             |\n");
	printf("|------------|-------|------------|-------------|\n");
	/* вывод строк фактических данных */
	for (i = 0; i < n; i++)
		printf("| %10s |   %c   |  %-9.1f | %11d |\n",
			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
	printf("------------------------------------------------\n");
	printf("| Примечание: Д - Динамо, С - Спартак,          | \n");
	printf("|   Ш -  Шахтер                                 | \n");
	printf("------------------------------------------------\n");
}
void random(mon mm[]) {

	for (int n = 0; n < M; n++) {
		printf("%d. Введите: фамилию >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));



	}

	char letters[3] = { 'Ш', 'С' ,'Д' };
	for (int i = 0; i < 3; i++)
	{
		mm[i].cnt = rand() % 40 + (40 * (2 - i));
		mm[i].sc = letters[i % 3];
		mm[i].sq = i + 1;
	}

	mm[10] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[10];
}

void put(mon mm[]) {
	for (int n = 0; n < M; n++) {
		printf("%d. Введите: Фамилию,  Код, Количество, Место в Итоге >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));
		scanf_s("%s", &mm[n].sc, sizeof(mm[n].name));
		scanf_s("%f", &mm[n].cnt);
		/* Âíèìàíèå! Ìû îáõîäèì îøèáêó â ñèñòåìå ïðîãðàììèðîâàíèÿ */
		scanf_s("%d", &mm[n].sq); //mm[n].sq = sqx;
	}

}