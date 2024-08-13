#include<iostream>
#include<vector>
using namespace std;

int main(){
   
   vector<int>arr{10,23,45,2,23,12,45,56,678,45,34,432};
   int sum = 478;

for (int i = 0; i <arr.size(); i++)
{
    int elem = arr[i];

    for (int j = i+1; j < arr.size(); j++)
    {
        int elem2 = arr[j];

        for (int k = j+1; k < arr.size(); k++)
        {
           if (sum == elem + elem2 + arr[k])
           {
             cout << "The sum is found at indexes: " << i << ", " << j << ", " << k << endl;
            cout<<" the sum will found on the " << elem <<"," << elem2 << "," << arr[k] << endl;            
           }
           
        }
        
    }
    
}

  

    return 0;
}