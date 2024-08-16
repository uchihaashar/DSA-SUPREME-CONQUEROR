#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int elem = nums[mid];

        if (elem == target) {
            ans = mid;
            end = mid - 1; // Change this line for sorted array
        } else if (target > elem) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,44,4,4,4,4,4,44, 5};
    int target = 4;

    int jawab = BinarySearch(nums, target);

    if (jawab == -1) {
        cout << "Apka target nahi mila." << endl;
    } else {
        cout << "Target mila at index: " << jawab << endl;
    }

    return 0;
}
