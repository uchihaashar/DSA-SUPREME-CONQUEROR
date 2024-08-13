#include<iostream>
#include <vector>
using namespace std;

int main(){

// vector<int>arr(3);

// cout << " enter the value in arr" ;
// for (int i = 0; i < 4; i++)
// {
//     cin >> arr[i];
// }

// for (int i = 0; i < arr.size(); i++)
// {
//     cout << "arr[" << i << "] = " << arr[i] << endl;
// }


// cout << "the size of the array is " << arr.size() << endl;

// cout << "the capacity of the array is " << arr.capacity() << endl;

// arr.push_back(5);


vector<int>arr{1,2,3,4};

for (int i = 0; i < arr.size(); i++)
{
    cout << "arr[" << i << "] = " << arr[i] << endl;
}

cout << " the size of the array is " << arr.size() << endl;
cout << " the capacity of the array is " << arr.capacity() << endl;

arr.push_back(5);
for (int i = 0; i < arr.size(); i++)
{
    cout << "arr[" << i << "] = " << arr[i] << endl;
}
cout << "the size of the array is " << arr.size() << endl;
cout << "the capacity of the array is " << arr.capacity() << endl;

for (int i = 0; i < arr.size(); i++)
{
    arr.pop_back();
}


for (int i = 0; i < arr.size(); i++)
{
    cout << "arr[" << i << "] = " << arr[i] << endl;
}

cout << "the size of the array is " << arr.size() << endl;
cout << "the capacity of the array is " << arr.capacity() << endl;



    return 0;

}