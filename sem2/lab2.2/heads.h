#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define M 3	


#define PRINT_TYPE
//#define DEBUG

struct mon {
	string name;
	char sc;
	float cnt;
	int sq;
};

void print(mon mm[]);
void random(mon mm[]);
void sort(mon mm[]);
void print(mon mm[]);