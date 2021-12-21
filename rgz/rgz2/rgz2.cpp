#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <chrono>


using namespace std;
#define N 45
#define coun 60
#define MAXINT 32767

using namespace std;

int* Sort(int A[N], int size) {

    int tree[N * 2];
    int i;

    int k, j = 0;

    while (j < N) {
        tree[size + j] = A[j];
        ++j;
    }

    j = size;
    while (j < 2 * size)
    {
        if (tree[j] >= tree[j + 1])  tree[j / 2] = j;
        else  tree[j / 2] = j + 1;
        j += 2;
    }

    k = size / 2;
    while (k >= 1)
    {
        j = k;
        while (j < 2 * k)
        {
            if (tree[tree[j]] >= tree[tree[j + 1]])
                tree[j / 2] = tree[j];
            else  tree[j / 2] = tree[j + 1];
            j += 2;
        }
        k /= 2;
    }

    for (k = N; k >= 2; --k)
    {
        i = tree[1];
        A[k - 1] = tree[i];
        tree[i] = -MAXINT;


        if (i % 2)  tree[i / 2] = i - 1;
        else  tree[i / 2] = i + 1;

        i /= 2;

        while (i > 1)
        { //j - ápàò i.
            if (i % 2)  j = i - 1;
            else  j = i + 1;
            if (tree[tree[i]] > tree[tree[j]])  tree[i / 2] = tree[i];
            else  tree[i / 2] = tree[j];
            i /= 2;
        }
    }
    A[0] = tree[tree[1]];
    return A;
}


int main()
{
    /*int A[N];
    cout << "Massiv:\n";
    for (int i = 0; i < N; ++i)
    {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;

    Sort(A, N);
    for (int j = 0; j < N; j++) {
       cout <<  A[j] << " ";
    }*/


    cout.setf(ios::fixed);
    cout.precision(7);


    setlocale(LC_ALL, "Russian");
    int typesort;
    cout << "Введите масив для блочной сортировки. 1,2,3";
    cin >> typesort;
    int mainArray[N];
    int array[N]; // массив который нужно отсортировать
    for (int j = 0; j < N; j++) {
        if (typesort == 1) {
            array[j] = j + 1;
        }
        else if (typesort == 2) {
            array[j] = (N - j);
        }
        else {
            array[j] = rand() % 10;
        }
        mainArray[j] = array[j];

    }
    int array1[N][N] = { 0 }; // массив в котором будут заноситься числа

    double count[coun];
    int countTrigger = 0;
    for (int i = 0; i < coun; i++) {
        for (int j = 0; j < N; j++) {
            array[j] = mainArray[j];
        }





        for (int i = 0; i < N; i++)
            cout << array[i] << " ";
        cout << endl << endl;

        auto start = std::chrono::system_clock::now();
        Sort(array, N);  // вызов функции
        auto end = std::chrono::system_clock::now();

        cout << endl << endl << "array[] = ";
        for (int i = 0; i <= N - 1; i++)
            cout << array[i] << " ";
        cout << endl << endl;





        chrono::duration<float> duration = end - start;
        cout << endl;
        cout << "\nThe time: " << duration.count() << "\n";
        count[countTrigger] = duration.count();
        countTrigger++;


    }
    double temp;
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
    for (int i = ((coun) * 20) / 100; i < (coun - ((coun) * 20) / 100); i++) {
        finalCount += count[i];
    }
    double sixteen = ((coun) * 60) / 100;
    cout << "The final result: " << (finalCount / sixteen) << endl;

}