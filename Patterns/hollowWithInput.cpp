#include<iostream>
using namespace std;
int main(){
    int rowNO, colNO ;
    cout << "Enter the number of rows and columns: ";
    cin >> rowNO >> colNO;

    for (int i = 0; i < rowNO; i++)
    {
        if (i == 0 || i ==rowNO -1)
        {
           for (int j = 0; j < colNO ; j++)
           {
            cout << "* ";
           }
           
        }

        else{
            cout << "* ";
            for (int j = 1; j < colNO - 1; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        
        cout << endl;
    }
    
}