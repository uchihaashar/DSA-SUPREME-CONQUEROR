#include <iostream>
using namespace std;
int main ()
{
    int arr [6]= { 0,9,0,9,0,0};
    int nine = 0;
    int zero = 0;
    for (int  i = 0; i < 6; i++)
    {
    if (arr[i]==9)
    {
        nine++;
    }
  else{
    zero++;
    }
    }
    cout << "Number of 9s: " << nine << endl;
    cout << "Number of 0s: " << zero << endl; 
return 0;
}