#include<iostream>

using namespace std;


void printRowWise(int arr[][3], int row, int col){

for (int i = 0; i < row; i++)
{
    int sum =0;
    for (int j = 0; j < col; j++)
    {
       sum = sum + arr[j][i];

    }
    
    cout << "Sum of all elements in the array: " << sum << endl;
}

}
int main(){


int arr[3][3]={{1,2,3},{5,6,0},{7,8,7}};
int row = 3;
int col =3;


for (int  i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
        
    }
    
    cout << endl;
 
}

printRowWise(arr, row, col);
    return 0;
}