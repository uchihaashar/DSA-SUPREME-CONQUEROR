#include<iostream>
#include <vector>
using namespace std;
int main(){

int row = 5;
int col =5;
    vector<vector<int> >arr(row,(vector<int>(col, -8)));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
    
}