#include<iostream>

using namespace std;

int printmaxNumber(int arr[][3], int row,int column){
    int max = INT16_MIN;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < column; j++)
    {
        if (max < arr[i][j])
        {
            max = arr[i][j];
        }
        
    }
  
    
}
  return max;
}
int main(){

    int arr[3][3]={{3,4,5},{4,22,77},{34,456,0}};
    int row=3;
    int col=3;


    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
           cout << arr[i][k] << "  ";
        }
        
        cout << endl;
    }
    

    int asn = printmaxNumber(arr,row,col);
    cout << "Maximum number in the array is: " << asn << endl;

    return 0;
}