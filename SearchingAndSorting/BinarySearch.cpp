#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform binary search

int BinarySearch(vector<int>nums, int target){
    int start = 0;
    int end = nums.size() - 1;

    while (start<=end){
    int mid =  start + (end - start)/2;
    int elem = nums[mid];
    if (elem == target)
    {
        return mid;
    }
    else if(target<elem){
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
    mid = start + (end - start)/2;

    }
   
   return -1;
    
}

int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int target =  3;


    int ans = BinarySearch(nums, target);

    if (ans == -1)
    {
        cout << "Element not found in the array" << endl;
    }
    else {
        cout << "Element found at index " << ans << endl;
    }
    

}