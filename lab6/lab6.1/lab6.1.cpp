#include <iostream>
#include <time.h>   // ��� �������

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 4;
	int num;
	srand(time(0)); // ��� �������

	
	int random;
	

	while (true) {
		printf("\n����� ����!\n");
		random = rand() % 100;
		printf("%d \n", random);
		for (int nn = n; nn > 0; nn--) {

			printf("������� ����� - ");
			scanf_s("%d", &num);

			if (num > 100 || num < 0) {
				printf("������� ��������� ��������! ");
				nn++;
				printf(" ��� %d ������� \n", nn);
				continue;
			}

			if (num == random) {
				printf("�� �������!");
				break;
			}
			else if (num < random) {
				printf("���� ����� ������ ���������.");
			}
			else {
				printf("���� ����� ������ ���������.");
			}
			printf(" ��� %d ������� \n", nn);
		}
	}

}
