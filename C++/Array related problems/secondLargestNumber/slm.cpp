/*find the second largest number in the given array*/
#include <iostream>
using namespace std;
int largestElementIndex(int arr[], int n)
{
    int max = 0, i, maxIndex = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{
    int n, i, x, j, maxIndex = 0, secondLargestIndex = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    maxIndex = largestElementIndex(arr, n);
    arr[maxIndex] = -1;
    secondLargestIndex = largestElementIndex(arr, n);
    cout << "The second largest element in the array is " << arr[secondLargestIndex];
    return 0;
}
