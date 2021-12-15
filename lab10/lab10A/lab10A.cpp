#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>

using namespace std;


void Shuttle(int arr[], int size)
{
    int j, i, temp;

    for (i = 1; i < size; i++) {

        j = i - 1;

        while (j >= 0) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                j--;
            }
            else break;
        }
    }
}


int main()
{
    while (true) {

        cout.setf(ios::fixed);
        cout.precision(15);

        cout << "Shuttle sort" << endl;
        int size;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (int i = 0; i < size; i++) {

            //arr[i] = rand() % 10 + 1;
            arr[i] = i;
            cout << setw(3) << arr[i];

        }

        double aver_dur = 0;

        double dur_arr[1000];

        for (int i = 0; i < size; i++) {

            auto begin = std::chrono::high_resolution_clock::now();

            Shuttle(arr, size);

            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> duration = end - begin;

            dur_arr[i] = duration.count();
        }

        for (int i = 0; i < size; i++) {

            if (i > 0) aver_dur += dur_arr[i];

        }

        cout << "\nSorted array:" << endl;
        for (int i = 0; i < size; i++) {

            cout << setw(3) << arr[i];

        }

        std::cout << "\nThe time:" << aver_dur / (size - 1) << "s\n" << endl;
    }

    //system("pause");
    return 0;
}