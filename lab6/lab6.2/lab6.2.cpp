#include <iostream>
#include <time.h>   // time

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0)); // для рандома
    int n;
    int correct = 0;
    int xmax = 9;
    int ymax = 9;
    while (true) {
        srand(time(0));
        int random_number = rand();
        printf("Сколько примеров вы хотите ? - ");
        scanf_s("%d", &n);
        int nn = n;
        for (nn; nn > 0; nn--) {
            int x = (rand() % xmax) + 1;
            int y = (rand() % ymax) + 1;

            printf("Решите пример %d * %d = ", x, y);
            int answ;
            scanf_s("%d", &answ);
            if (answ == (x * y)) {
                correct++;
            }
        }
        printf("ваша оценка %d из %d \n\n\n", correct, n);
    }

}



