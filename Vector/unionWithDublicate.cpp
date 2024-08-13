#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sizea = 5;
    int brr[] = {3, 6, 7, 8, 9, 10};
    int sizeb = 6;
    vector<int> ans;

    // Pushing elements from arr to ans
    for (int i = 0; i < sizea; i++) {
        ans.push_back(arr[i]);
    }

    // Adding elements from brr to ans if they are not duplicates
    for (int i = 0; i < sizeb; i++) {
        bool isDuplicate = false;

        // Check if brr[i] is already in ans
        for (int j = 0; j < ans.size(); j++) {
            if (brr[i] == ans[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not a duplicate, add to ans
        if (!isDuplicate) {
            ans.push_back(brr[i]);
        }
    }

    // Printing the union array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
