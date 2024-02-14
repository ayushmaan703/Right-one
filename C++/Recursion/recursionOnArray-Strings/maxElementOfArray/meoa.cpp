#include <iostream>
#include <cmath>
using namespace std;
int maxNum(int *arr, int idx, int n) 
{
    int maxVal=-1;
    if (idx == n - 1)
        return arr[idx];
    return max(arr[idx],maxNum(arr, idx + 1, n));
}
int main()
{
    int arr[5] = {5, 9, 4, 8, 3};
   cout<< maxNum(arr, 0, 5);
    return 0;
}