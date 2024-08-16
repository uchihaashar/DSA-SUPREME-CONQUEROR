#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9,10};
   
 if (std::binary_search (v.begin(), v.end(), 3))
 {
    cout<< " found the number";
 }
 else{
    cout<< "not found the number";
 }
 

}