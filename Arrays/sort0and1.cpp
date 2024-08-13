#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1};
    int start = 0;
    int end = arr.size() - 1;

    for (int i = 0; start <= end; i++) {
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
        } else {
            swap(arr[end], arr[i]);
            end--;
            i--;  // Decrement i because the swapped element at i needs to be checked
        }
    }

    for (auto value : arr) {
        cout << value << " ";
    }

    return 0;
}
