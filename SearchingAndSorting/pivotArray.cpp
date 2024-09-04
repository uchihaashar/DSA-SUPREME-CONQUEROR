#include<iostream>
using namespace std;

int getpivot(int arr[], int size) {
    int s = 0;
    int e = size - 1;
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
    int arr[] = {10, 12, 14, 16, 3, 4, 5};

    cout << "Pivot is " << getpivot(arr, 7) << endl;

    return 0;
}
