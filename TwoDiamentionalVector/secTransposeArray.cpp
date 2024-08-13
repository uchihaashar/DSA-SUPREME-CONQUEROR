#include <iostream>
using namespace std;

void transposeArray(int arr[][3],int r ,int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }
    
}
int main (){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3, col=3;

    cout <<"printing normal array" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";  // Transposing the matrix
        }
        cout << endl;
    }
    
    transposeArray(arr,row,col);

     cout <<"printing transpose array" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";  // Transposing the matrix
        }
        cout << endl;
    }
    

    return 0;

}