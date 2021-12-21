#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <chrono>
#define coun 60
#define size 45

using namespace std;

void bucketSort(int[], int, int[][size]); // прототип функции

int main()
{
    cout.setf(ios::fixed);
    cout.precision(7);


    setlocale(LC_ALL, "Russian");
    int typesort;
    cout << "Введите масив для блочной сортировки. 1,2,3";
    cin >> typesort;
    int mainArray[size];
    int array[size]; // массив который нужно отсортировать
    for (int j = 0; j < size ; j++) {
        if (typesort == 1) {
            array[j] = j+1;
        }
        else if (typesort == 2) {
            array[j] = (size - j);
        }
        else {
            array[j] = rand() % 10;
        }
        mainArray[j] = array[j];
       
    }
    int array1[size][size] = { 0 }; // массив в котором будут заноситься числа

    double count[coun];
    int countTrigger = 0;
    for (int i = 0; i < coun;i++) {
        for (int j = 0; j < size; j++) {
            array[j] = mainArray[j];
        }



        

        for (int i = 0; i < size; i++)
            cout << array[i] << " ";
        cout << endl << endl;

        auto start = std::chrono::system_clock::now();
        bucketSort(array, size, array1); // вызов функции
        auto end = std::chrono::system_clock::now();

        cout << endl << endl << "array[] = ";
        for (int i = 0; i <= size-1; i++)
            cout << array[i] << " ";
        cout << endl << endl;
        // обнуляем блочный массив
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                array1[i][j] = 0;




        chrono::duration<float> duration = end - start;
        cout << endl;
        cout << "\nThe time: " << duration.count() << "\n";
        count[countTrigger] = duration.count();
        countTrigger++;

       
    }

    for (int i = 0; i < coun; i++) {
        cout << "\nThe time1: " << count[i] << "\n";
    }
  // Сортировка массива пузырьком
    double temp; // временная переменная для обмена элементов местами

   // Сортировка массива пузырьком
    for (int i = 0; i < coun - 1; i++) {
        for (int j = 0; j < coun - i - 1; j++) {
            if (count[j] > count[j + 1]) {
                // меняем элементы местами
                temp = count[j];
                count[j] = count[j + 1];
                count[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < coun; i++) {
        cout << "\nThe time2: " << count[i] << "\n";
    }
    double finalCount = 0;
    for ( int i = ((coun) * 20) /100; i < (coun - ((coun) * 20) /100); i++) {
        finalCount += count[i];
    }
    double sixteen = ((coun) * 60) /100;
    cout << "The final result: " << ( finalCount/sixteen)<<endl;




    system("pause");
    
    return 0;
}

void bucketSort(int ar[], int x, int ar1[][size]) // передаем функции оба массива
{
    int t = 0;
    // d - разряды чисел.
    int d = 1;
    // выполняем цикл 3 раза.Т.к. у нас наибольшее число 100 с 3мя разрядами
    // 1-ый для d=1,2-ой для d=10, 3ий для d=100
    for (int z = 0; z < 3; z++)
    {
        t = 0;  // сброс счетчика в 0 при каждом проходе цикла
        for (int i = 0; i < x; i++)
        {
            // каждый элемент 1го массива, приваиваем 2ому массиву,где строка
            // которого получается путём деления i на d и остаток от деления
            // на 10, строка остается та же i
            ar1[(ar[i] / d) % 10][i] = ar[i];
        }
        // присваеваем обратно элементы со 2го массива,не равные 0,
        // обратно в 1ый массив по порядку, в котором они распределились
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
                if (ar1[i][j] != 0)
                {
                    ar[t] = ar1[i][j];
                    t++;
                }
        }
        // для наглядности - печать 2го блочного массива и 1го массива
      /*  cout << setw(3) << "    0 " << "   1 " << "   2 "
            << "   3 " << "   4 "
            << "   5 " << "   6 "
            << "   7 " << "   8 "
            << "   9 " << endl << endl;*/    
        
        // обнуляем блочный массив
        for (int i = 0; i < x; i++)
            for (int j = 0; j < x; j++)
                ar1[i][j] = 0;
        // в конце каждого цикла умножаем d на 10 для следующего разряда
        d *= 10;
    }
    
}