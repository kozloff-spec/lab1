#include <iostream>
#include <iostream>
#include <algorithm> 
#include <iomanip>
using namespace std;


void matrix_style(int row_col, int array[100])
{
    int matrix[100][100];
    cout << "\n Matrix:" << endl;
    for (int i = 0; i < row_col; ++i) {
        for (int j = 0; j < row_col; ++j) {
            matrix[i][j] = array[(i * row_col + j)];
            cout << setw(4) << matrix[i][j];
        }cout << endl;
    }
    //avarage value
    for (int i = 0; i < row_col; ++i) {

        int avarage_value = 0;

        for (int j = 0; j < row_col; ++j) {
            avarage_value += matrix[i][j];
        } avarage_value /= row_col;

        for (int j = 0; j < row_col; ++j) {
            matrix[i][j] *= avarage_value;
        } avarage_value = 0;
    }
    cout << "New multipled matrix:" << endl;
    for (int i = 0; i < row_col; ++i) {
        for (int j = 0; j < row_col; ++j) {
            cout << setw(4) << matrix[i][j];
        }cout << endl;
    }



    return;
}



int main()
{
    while (true) {

        int array[100];
        // input size of arry 
        int size_array;
        cout << "Input array size multiple of the root size of the array" << endl;
        cin >> size_array;

        if (sqrt(size_array) - int(sqrt(size_array)) == 0) {
            // array output
            cout << "Your array is:" << endl;

            for (int i = 0; i < size_array; ++i) {
                array[i] = rand() % 10 + 1;
                cout << setw(3) << array[i];
            } int row_col = sqrt(size_array);

            matrix_style(row_col, array);

        }
        else cout << "Error" << endl;

        cout << "\n\n\n";

    }

    return 0;
}