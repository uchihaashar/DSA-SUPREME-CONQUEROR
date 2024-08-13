#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        if (i == 0 || i == 2) {
            // First and last row: Print a solid line of stars
            for (int j = 0; j < 5; j++) {
                cout << "* ";
            }
        } else {
            // Middle row: Print a hollow line with spaces in between
            cout << "* "; // First star
            for (int j = 0; j < 3; j++) {
                cout << "  "; // Two spaces (for the hollow part)
            }
            cout << "* "; // Last star
        }
        cout << endl; // Move to the next line
    }
    return 0;
}
