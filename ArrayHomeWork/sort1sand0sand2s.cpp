#include<iostream>
#include<vector>
using namespace std;

void sortingFunction(vector<int>& arr){
int zeros = 0;
int ones = 0;
int twos = 0;

   
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
           zeros++;
        }
        
        else if (arr[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }
    

    int i = 0;
    while(zeros--){
        arr[i] = 0;
        i++;
    }
    while(ones--){
        arr[i++] = 1;
    }
    while(twos--){
        arr[i++] = 2;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
vector<int>arr{1,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,0,0,0,1,1,1};

for (int i = 0; i < arr.size(); i++)
{
    cout << arr[i] << " ";
}

cout << "\n";

sortingFunction(arr);

return 0;




}