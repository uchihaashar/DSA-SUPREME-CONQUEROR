#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[] = {2334,345,345645,674745,34535,345,5,654,345};
    int size = 9;
    int maxi = INT8_MIN;

for (int i = 0; i < size; i++)
{
  if (arr[i] > maxi)
  {
    maxi = arr[i];
  }
  
}
  cout << "Maximum number in the array is: " << maxi << endl;  // Prints: Maximum number in the array is: 674745

    return 0;

}