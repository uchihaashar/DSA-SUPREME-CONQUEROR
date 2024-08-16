#include<iostream>
#include<vector>
 using namespace std;

 void missingNum(int *a , int n){
for (int i = 0; i < n; i++)
{
    int index = abs(a[i]);
  if (a[index-1]>0){
    a[index-1]  *= -1;
  }
 
    
}

for (int i = 0; i < n; i++)
{
   cout << a[i]<<" ";
}


 }

int main() {

    int n ;
    int a []= {1,2,3,3,4};
    n = sizeof(a)/sizeof(int);

    missingNum(a , n);

    return 0;

}