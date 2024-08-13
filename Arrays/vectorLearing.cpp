#include <iostream>
#include <vector>
using namespace std;
int  main(){
    // vector<int>arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout << "The size of the vector is: " << ans << endl;
    // cout << "the capicity of the vector is: " << arr.capacity()<< endl;

    vector<int> brr(10,9);
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    
    cout << "The size of the vector is: " << brr.size() << endl;
    cout << "the capicity of the vector is: " << brr.capacity()<< endl;

    return 0;
}