#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int n;
    cin >> n;

    for (int i = 0; i < size; i++) {
        if (n == arr[i]) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    return 0;
}
