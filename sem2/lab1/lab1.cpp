#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "windows.h";

using namespace std;

#define amount_of_elements 3

struct Details {


    string name;
    char type;
    int count;
    float weight;


}det[4];

void in_put(Details det[]) {


    for (int i = 0; i < amount_of_elements; ++i) {


        cin >> det[i].name >> det[i].type >> det[i].count >> det[i].weight;

    }

}

void random(Details det[]) {


    char letters[3] = { 'С', 'Ш' ,'Д' };
    static string name_rand[] = { "Фланец", "Переходник", "Станина" };
    for (int i = 0; i < amount_of_elements; i++) {
        if (i == 0) {
            det[i].name = "Баландин";
        }
        else if (i == 1) {
            det[i].name = "Шишков";
        }
        else if (i == 2) {
            det[i].name = "Кравченко";
        }
        //det[i].name = name_rand[rand() % 3];
        det[i].weight = rand() + 10.0;
        det[i].type = letters[rand() % 3];
        det[i].count = rand() + 1;

    }
}

void sort(Details det[]) {


    if (det[0].count > det[1].count) {
        swap(det[0], det[1]);

    }

    if (det[0].count > det[2].count) {
        swap(det[0], det[2]);

    }

    if (det[1].count > det[2].count) {
        swap(det[1], det[2]);

    }

}

void print(Details det[]) {
    /* Вывод таблицы */
    printf("-------------------------------------------------\n");
    printf("|   		Ведомость деталей               |\n");
    printf("|-----------------------------------------------|\n");
    printf("|   Фамилия  |  Код  |Количество  |Место в Итоге|\n");
    printf("|  участника |Команды|балов       |             |\n");
    printf("|------------|-------|------------|-------------|\n");
    /* вывод строк фактических данных */
    for (int i = 0; i < amount_of_elements; i++) {
        cout << "|";
        cout.width(12);
        cout << det[i].name;
        printf("|   %c   |  %-9.1d | %11lg |\n",
            det[i].type, det[i].count, det[i].weight);
    }
    printf("------------------------------------------------\n");
    printf("| Примечание: Д - Динамо, С - Спартак,          | \n");
    printf("|   Ш -  Шахтер                                 | \n");
    printf("------------------------------------------------\n");




}

int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int action = 0;
    while (true) {

        for (int i = 0; i < 1; i++) {

            cout << "1 – случайным, 2 - ввод с экран, 3 – сортировка, 4 – печать, 5 - завершить роботу ";
            cin >> action;

            if (action == 1) {
                random(det);
            }
            else if (action == 2) {
                in_put(det);
            }
            else if (action == 3) {
                sort(det);
            }
            else if (action == 4) {
                print(det);
            }
            else if (action == 5) {
                exit(0);
            }
        }

    }



    return 0;
}

