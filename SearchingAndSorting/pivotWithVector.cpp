#include<iostream>
#include<vector>
using namespace std;

int getpivot(vector<int>& arr) {
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

int main() {
    vector<int> arr = {10, 12, 14, 16, 3, 4, 5};

    int pivotIndex =  getpivot(arr) ;

    cout << "The pivot element is: " << arr[pivotIndex] << endl;
    cout << "the pivot index is: " << pivotIndex << endl;

    return 0;
}
