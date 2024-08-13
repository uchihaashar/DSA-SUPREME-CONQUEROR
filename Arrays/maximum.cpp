#include <iostream>
using namespace std;

int main ()
{
    int max = 0;
    int arr[] = {1, 43, 646, 75, 34, 46, 34, 463, 34, 3232, 353};
    int size = 11; // Corrected array size

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The maximum value in the array is: " << max << endl; // Corrected output statement
    return 0;
}
