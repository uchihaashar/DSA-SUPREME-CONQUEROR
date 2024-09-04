#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        int elem = arr[mid];
        if (target == elem)
        {
            return mid;
            
        }
        else if (target < elem){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
 vector<int>arr {1,2,3,4,5,6,7,8,9 ,10,11,12,13,14,15,16};
 int target = 16;

 int ans =  BinarySearch(arr, target);
if (ans == -1)
{
    cout << "Element not found in the array" << endl;
}
else{
    cout << "Element found at index: " << ans << endl;
}


 return 0;
}