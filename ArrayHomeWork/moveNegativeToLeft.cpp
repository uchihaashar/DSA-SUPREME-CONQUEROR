#include <iostream>
#include <vector>
using namespace std;

void MoveNegative(vector<int>& arr) {
    int l =0;
    int h = arr.size()-1;

    int i = 0;
    while(l<=h){
        if (arr[l]<0)
        {
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[h], arr[l]);

        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
       cout << arr[i] <<" ";
    }
    
}

int main(){

    vector<int>arr{-2,1,4,6,8,-3,-65};

    for (int i = 0; i < arr.size(); i++)
    {
      cout << arr[i] << " " ;
    }
    
    cout << endl;

    MoveNegative(arr);

    return 0;
 
}