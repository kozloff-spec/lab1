#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_el


ements 3
#define M 3	


#define PRINT_TYPE
//#define DEBUG

struct mon {
	string name;
	char sc;
	float cnt;
	int sq;
};

void in_put(mon mm[]);
void random(mon mm[]);
void sort(mon mm[]);
void print(mon mm[]);