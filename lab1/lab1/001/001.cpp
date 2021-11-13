#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int arr_size;
    cout << "Let`s crate an array.";
    cout << "How many element`s do you need? ";
    cin >> arr_size;

    int* arr = new int[arr_size];

    // random created array
    cout << "Your array:" << endl;
    for (int i = 0; i < arr_size; i++) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << setw(4);
    }
    cout << endl;

    // to do qu
    string answer;
    string del_new("del");
    string add_new("add");

    cout << "Do you whant to delete element`s or add some new? <del/add> ";
    cin >> answer;

    int k; // num of elemnts that we add or del
    int i; // index of array
    int pos_rep = 0; // position repeat of index

    // add k elements
    if (answer == add_new) {
        // input 
        int pos;
        cout << "How many elements do you whant to add? ";
        cin >> k;
        cout << "Choose the position where you whant to add " << k << " elements ";
        cin >> pos;

        if (pos < 1 || pos > arr_size) {
            cout << "Error! You let the arry`s limit out." << endl;
        }

        // add loops
        else {
            int* add_arr = new int[arr_size + k];

            for (i = 0; i < pos; i++) {
                add_arr[i] = arr[i];
            }

            int* add_extra = new int[k];

            cout << "New elements: ";
            for (int j = 0; j < k; j++) {
                add_extra[j] = rand() % 10 + 1;
                cout << add_extra[j] << setw(4);
            }
            cout << endl;

            for (int j = 0, i = pos; i < pos+ k; i++, j++)
            {
                add_arr[i] = add_extra[j];
            }

           

            
            for (int j = pos+k, i = pos; j < arr_size+k; j++, i++)
            {
                add_arr[i+k] = arr[i];
            }

            

            // new array
            cout << "Your new array:" << endl;
            for (i = 0; i < arr_size + k; i++) {
                cout << add_arr[i] << setw(4);
            }
            cout << endl;
        }
    }
    // del k elements
    else if (answer == del_new) {

        // input 
        cout << "How many elements do you whant to delete(left to right)? ";
        cin >> k;
        cout << "Choose the position where you whant to delete " << k << " elements ";
        cin >> i;

        // delet loop
        if (i + k > arr_size || i < 0 || i > arr_size) {
            cout << "Error! You let the array`s limit out." << endl;
        }

        else if (arr_size == k && i == 0) {
            cout << "Array has been deleted!" << endl;
        }

        else {

            for (; i < arr_size - k; i++) {
                arr[i] = arr[i + k];
            }

            // new array
            cout << "Your new array:" << endl;
            for (i = 0; i < arr_size - k; i++) {
                cout << arr[i] << setw(4);
            }
            cout << endl;
        }
    }

    return 0;
}

