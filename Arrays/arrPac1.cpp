#include <iostream>
using namespace std;

bool foundFnc(int arr[], int size , int key ){
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;  // if not found then return false  directly  without checking the rest of the array.  this will reduce the time complexity of the function.  it will stop checking as soon as it finds the key.  It's called early exit.  it's a good coding practice.  In this case, it's also more efficient than the previous version.  The time complexity is O(1) or constant time.  This is because the size of the array is not dependent on the key we are searching for.  It's a fixed number.  It's a constant time operation.  In other words, the time it takes to execute the function doesn't change based on the size of the array.  It's a constant time operation.  The space complexity is also O(1
}

int main ()
{

    int arr [5]={ 2,5,3,7,9};
    int size = 5;
    cout << " enter the key what you wnna find" << endl;
    int key ;
    cin >> key;

 if (foundFnc(arr,size,key))
 {
    cout << "found " << endl;
 }
 else{
    cout << "Not found " << endl;
 }
 
    

return 0;
}