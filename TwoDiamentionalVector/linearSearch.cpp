#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int col = 2;
    int row = 2;
    int key = 3;
    bool found = false; // Initialize a boolean variable to track whether the key is found

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (key == arr[i][j]) {
                found = true; // Set the flag to true if the key is found
                break; // Exit the inner loop
            }
        }
        if (found) {
            break; // Exit the outer loop if the key is found
        }
    }

    if (found) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    return 0;
}
