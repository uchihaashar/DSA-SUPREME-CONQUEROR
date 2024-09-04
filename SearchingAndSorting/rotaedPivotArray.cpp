#include<iostream>
#include<vector>
using namespace std;

// Function to find the pivot (smallest element) index
int getPivot(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;

    while (s < e) {
        if (arr[m] >= arr[0]) {
            s = m + 1;
        } else {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

// Function to perform binary search
int binarySearch(vector<int>& arr, int s, int e, int target) {
    while (s <= e) {
        int m = s + (e - s) / 2;

        if (arr[m] == target) {
            return m;
        } else if (arr[m] < target) {
            s = m + 1;
        } else {
            e = m - 1;
        }
    }
    return -1; // Target not found
}

// Function to search target in rotated sorted array
int searchInRotatedArray(vector<int>& arr, int target) {
    int pivot = getPivot(arr);
    int n = arr.size();

    // If target is greater than or equal to the first element, search in the left part
    if (target >= arr[0] && target <= arr[pivot - 1]) {
        return binarySearch(arr, 0, pivot - 1, target);
    } 
    // Otherwise, search in the right part
    else {
        return binarySearch(arr, pivot, n - 1, target);
    }
}

int main() {
    vector<int> arr = {10, 12, 14, 16, 3, 4, 5};
    int target = 3;

    int index = searchInRotatedArray(arr, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
