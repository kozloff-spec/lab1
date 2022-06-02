#pragma once
#include "head.h"

void random(int *pointer)
{
	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 41 - 20;

	}
}

void print(int* pointer)
{
	for (int i = 0; i < size; i++) {
		cout << *(pointer + i) << setw(4);
	} cout << endl;
}

void max_elem(int* pointer)
{
	int max =	0;

	for (int i = 0; i < size; i++) {
		if (*(pointer + i) > *(pointer + max)) {
			max = i;
		}
	}
	int first_item = *(pointer + 0);
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			*(pointer + i) = *(pointer + max);
		}
		else if (i == max) {
			*(pointer + i) = first_item;
		}
		else {
			*(pointer + i) = *(pointer + i);
		}
	}
}

void new_arr(int* pointer, int* pointer_new)
{
	for (int i = 0, j = 0; i < size; i++) {
		if (*(pointer + i) < 0) {
			*(pointer_new + i) = *(pointer + i);
			cout << *(pointer_new + i)<< "  ";
		}
		
	}
	cout << endl;
}
