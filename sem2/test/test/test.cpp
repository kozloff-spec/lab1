
#include "head.h"
#include "print.cpp"



int action;
int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	mon mm[4];

	while (true) {
	 cout << "1 – ввод, 2 -сортировка, 3 – печать, 0 – выход\n";
	 cin >> action;
		 
			 if (action == 1) {
				#ifndef PRINT_TYPE 
				 put(mm);
				#else 			
						 
						 random(mm);
				#endif
				 
			 }
			 else if (action == 2) {
				 sort();
			 }
			 else if (action == 3) {
				 print(mm);
				
			 }
			 else if (action == 0) {
				cout << mm[0].name;
			 }
	 }
}
