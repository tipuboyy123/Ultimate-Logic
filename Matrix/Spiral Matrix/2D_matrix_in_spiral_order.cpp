/**
 * This is a C++ program to print a 2D matrix in spiral order.
 *
 * Author: samkit96
 **/
 
#include <bits/stdc++.h>
using namespace std;

int main() {
        
    int rows, columns;
    
    cout << "\nPlease enter number of rows in matrix :\n";
    cin >> rows;
    cout << "\nPlease enter number of columns in matrix :\n";
    cin >> columns;
    
    if (rows == 0 || columns == 0) {
    	
    	cout << "Please enter more than zero rows and columns for a valid matrix!";
    	return 0;
    }
    
    vector<vector<int>> matrix;
    for (int i=0 ; i<rows ; i++) {
    	
    	vector<int> temp;
    	for (int j=0 ; j<columns ; j++) {
    		
    		int element;
    		cin >> element;
    		temp.push_back(element);
    	}
    	
    	matrix.push_back(temp);
    }
    
    vector<int> ans;
    
    int start_row = 0, start_column = 0, end_row = rows-1, end_column = columns-1, direction = 0;
    
    while(start_row <= end_row && start_column <= end_column) {
        
        if (direction == 0) {

            for (int i=start_column ; i<=end_column ; i++) {
                ans.push_back(matrix[start_row][i]);
            }

            start_row++;
            direction = 1;
        } else if (direction == 1) {

            for (int i=start_row ; i<=end_row ; i++) {
                ans.push_back(matrix[i][end_column]);
            }

            end_column--;
            direction = 2;
        } else if (direction == 2) {

            for (int i=end_column ; i>=start_column ; i--) {
                ans.push_back(matrix[end_row][i]);
            }

            end_row--;
            direction = 3;
        }  else if (direction == 3) {

            for (int i=end_row ; i>=start_row ; i--) {
                ans.push_back(matrix[i][start_column]);
            }

            start_column++;
            direction = 0;
        }
    }
    
    cout << "\nSpiral order of the given matrix is:\n";
    for (int i=0 ; i<ans.size() ; i++) {
    	cout << ans[i] << " ";
    }
}
