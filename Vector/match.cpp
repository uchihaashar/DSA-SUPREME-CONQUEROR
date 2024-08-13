#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{1,2,3,4,5,6,7};
    vector<int>brr{5,6,3};
 
    vector<int>ans;

    for (int i = 0; i <arr.size(); i++)
    {
        int elemnt = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
           if (arr[i]==brr[j])
           {
            ans.push_back(elemnt);
           
        }
        

    }
    
    


    
}
for(auto value : ans){
        cout<<value<<" ";
    };

    return 0;

}