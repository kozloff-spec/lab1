
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define M 3	

struct mon {
	char name[15]; 
	char sc;      
	float cnt;       
	int sq;     
}; /* ����������� ������� ���������� */
/* �������� ���������, ������� ������������ ��������� */
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
	/* ����� ������� */
	struct mon x; /* ������� ���������� */
	int n = M;    /* ���������� ��������� � ������� */
	int i, j; /* ������� ������� � ������� */
	int m;    /* ������ ������������ �������� */
	printf("-------------------------------------------------\n");
	printf("|        ��������� ���������� ���������� |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   �������  |  ���  |����������  |����� � �����|\n");
	printf("|  ��������� |�������|�����       |             |\n");
	printf("|------------|-------|------------|-------------|\n");
	/* ����� ����� ����������� ������ */
	for (i = 0; i < n; i++)
		printf("| %10s |   %c   |  %-9.1f | %11d |\n",
			mm[i].name, mm[i].sc, mm[i].cnt, mm[i].sq);
	printf("------------------------------------------------\n");
	printf("| ����������: � - ������, � - �������,          | \n");
	printf("|   � -  ������                                 | \n");
	printf("------------------------------------------------\n");
}
void random(mon mm[]) {

	for (int n = 0; n < M; n++) {
		printf("%d. �������: ������� >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));



	}
	
	char letters[3] = { '�', '�' ,'�' };
	for (int i = 0; i < 3; i++)
	{
		mm[i].cnt = rand() % 40 + (40 * (2-i)) ;
		mm[i].sc = letters[i%3];
		mm[i].sq = i+1;
	}
	
	mm[10] = mm[2];
	mm[2] = mm[0];
	mm[0] = mm[10];
}

void put(mon mm[]) {
	for (int n = 0; n < M; n++) {
		printf("%d. �������: �������,  ���, ����������, ����� � ����� >",
			n + 1);
		scanf_s("%s", mm[n].name, sizeof(mm[n].name));
		if (!strcmp(mm[n].name, "***")) break;
		scanf_s("%s", &mm[n].sc, sizeof(mm[n].name));
		scanf_s("%f", &mm[n].cnt);
		/* ��������! �� ������� ������ � ������� ���������������� */
		scanf_s("%d", &mm[n].sq); //mm[n].sq = sqx;
	}

}



int main(void) {
	srand(time(0));
	setlocale(LC_ALL, "ru");

	
	float sqx;
	int action = 0;
	int n = 3;
	mon mm[M];
	
	

	while (true) {
		for (int i = 0; i < 1; i++)
		{
			cout << "1 � ���������, 2 - ���� � �����, 3 � ����������, 4 � ������";
			cin >> action;
			

			if (action == 1) {
				random(mm);
			}
			else if (action == 2) {
				put(mm);
			}
			else if (action == 3) {
				sort(mm);
			}
			else if (action == 4) {
				print(mm);
			}
		}

	}
	return 0;
}