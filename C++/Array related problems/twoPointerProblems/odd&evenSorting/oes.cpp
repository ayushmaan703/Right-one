/*sort an array in which the even numbers are in the starting followed by the odd numbers*/
// USING TWO POINTER APPROACH
#include <iostream>
using namespace std;
void sorting(int *arr, int n)
{
    int leftPtr = 0, rightPtr = n - 1, i;
    while (leftPtr < rightPtr)
    {
        if ((arr[leftPtr] % 2 != 0) && (arr[rightPtr] % 2 == 0))
        {
            int temp = arr[leftPtr];
            arr[leftPtr] = arr[rightPtr];
            arr[rightPtr] = temp;
            leftPtr++;
            rightPtr--;
        }
        if (arr[leftPtr] % 2 == 0)
        {
            leftPtr++;
        }
        if (arr[rightPtr] % 2 != 0)
        {
            rightPtr--;
        }
    }
    cout << "sorted array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, i;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sorting(arr, n);
    return 0;
}