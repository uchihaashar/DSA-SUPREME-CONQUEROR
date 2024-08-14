#include<iostream>
#include<vector>
using namespace std;


void sortAnsWithPointer(vector<int>& arr){
    int l = 0;
    int m =0;
    int h =arr.size()-1;

  while(m <= h){
    if (arr[m]==0)
    {
        swap(arr[m],arr[l]);
        m++; l++;
    }
    else if(arr[m]==1){
     m++;
    }
    else{
        swap(arr[m],arr[h]);
        h--;
    }
    
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

sortAnsWithPointer(arr);

    return 0;

}