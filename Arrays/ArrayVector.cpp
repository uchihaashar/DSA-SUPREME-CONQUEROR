#include <iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<vector<int>>arr;
    int  ans  = (sizeof(arr)/sizeof(int));
    cout << "The size of vector is: " << ans << endl;
    
return 0; 
}