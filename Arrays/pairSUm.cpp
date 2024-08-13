#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{1, 2, 3, 7, 4, 5, 6};
   int sum = 8;


    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++) {


            if (element + arr[j]==sum) {
                cout<< " pair found " << element << " , "<< arr[j] << endl;
                 // Exit the program after finding the first pair
            }
        }
    }

    cout << "No such pair exists." << endl;
    return 0;
}
