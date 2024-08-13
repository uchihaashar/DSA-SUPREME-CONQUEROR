#include<iostream>
using namespace std;

int main() {
    int arr[]={1,1,0,0,0,0,1,1,0,1,0,1,0,1,0,1,0};
    int size = 17;
    int zeroCount =0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    
    cout << "Number of zeros: " << zeroCount << endl;
    cout << "Number of ones: " << oneCount << endl;
    
}