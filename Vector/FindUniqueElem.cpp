#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans = 0;
 // XOR all elements in the array to get the unique element. 0 XOR any number is the number itself. 0 XOR 0 = 0. 0 XOR 1 = 1. 1 XOR 0 = 1. 1 XOR 1 = 0.
for (int i = 0; i < arr.size(); i++)
{
    ans = ans ^ arr[i];
}
return ans;
}

int main (){
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
     vector<int>arr(n);
     cout << "Enter the elements of the array: ";  // Inputting array elements.
    for (int i = 0; i <arr.size(); i++)
    {
        cin >> arr[i];

    }
    
    int UniqueElement = findUnique(arr);
    cout << "The unique element is: " << UniqueElement << endl;


    return 0;
}