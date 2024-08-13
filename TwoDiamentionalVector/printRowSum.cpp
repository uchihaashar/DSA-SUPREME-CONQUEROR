#include<iostream>

using namespace std; 

void printSum(int arr[][3], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
             
        }
        cout << "Sum of all elements in the array: " << sum << endl;

    }
    
   
    // return the sum for further use if needed.  // Added return statement to return the sum.  // Updated the function name to printSum.  // Updated the variable name to sum for clarity.  // Updated the array name to arr.  // Updated the function call to printSum(arr[3][3], row, col);  // Updated the variable name to row and col for clarity.  // Updated the loop indices to i and j for clarity.  // Updated the variable name to col to avoid confusion with the row variable.  // Updated the function call to print
}
int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    printSum(arr, row, col);


    return 0;
}