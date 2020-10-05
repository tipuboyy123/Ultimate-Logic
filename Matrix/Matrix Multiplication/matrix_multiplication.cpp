/**
 * This is a C++ program to multiply two matrices.
 *
 * Author: samkit96
 **/

#include <iostream>
using namespace std;

bool isValidInput(int total_columns1, int total_rows2) {
    
    return (total_columns1 == total_rows2);
}

int main() {

    int total_rows1, total_columns1, total_rows2, total_columns2;

    cout << "Please nter rows and columns for matrix 1:\n";
    cin >> total_rows1 >> total_columns1;
    cout << endl;

    cout << "Please enter rows and columns for matrix 2:\n";
    cin >> total_rows2 >> total_columns2;
    cout << endl;

    
    if (!isValidInput(total_columns1, total_rows2)) {

        cout << "Cannot multiply the matrices with entered dimensions as: column of first matrix not equal to row of second.";
        return 0;
    }

    int matrix1[total_rows1][total_columns1], matrix2[total_rows2][total_columns2], result[total_rows1][total_columns2];

    cout << "\nPlease enter elements of matrix 1: " << endl;

    for(int i = 0; i < total_rows1; i++) {

        for(int j = 0; j < total_columns1; j++) {

            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }

        cout << endl;
    }

    cout << "\nPlease enter elements of matrix 2:" << endl;

    for(int i = 0; i < total_rows2; i++) {

        for(int j = 0; j < total_columns2; j++) {

            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix2[i][j];
        }

        cout << endl;
    }

    // Initializing result matrix with zero value.
    for(int i = 0; i < total_rows1; i++) {

        for(int j = 0; j < total_columns2; j++) {

            result[i][j]=0;
        }
    }

    // Multiplying the matrix1 with matrix2 and storing answer in result matrix.
    for(int i = 0; i < total_rows1; i++) {

        for(int j = 0; j < total_columns2; j++) {

            for(int k = 0; k < total_columns1; ++k) {

                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "\nThe multiplied matrix is: \n";

    for(int i = 0; i < total_rows1; i++) {

        for(int j = 0; j < total_columns2; j++) {

            cout << " " << result[i][j];
        }

        cout << endl;
    }

    return 0;
}
