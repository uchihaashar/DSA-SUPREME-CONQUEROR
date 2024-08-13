# include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>arr{1,2,3,4,5,6,7,8};
 int ans = 9;
 for (int i = 0; i < arr.size(); i++)
 {
   for (int j = i+1; i < arr.size(); j++)
   {
    if (ans == arr[i]+arr[j])
    {
      cout << "the pair found  at " << arr[i]<<" one index  " << arr[j] << " two index "<< endl;
     
    }
    
   }
   
 }
 
cout<< ans << endl;


    return 0;
}