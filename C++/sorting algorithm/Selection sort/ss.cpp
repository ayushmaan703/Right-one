// this is for sorting in assending order
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: \n";

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]) // condition for decending order (arr[j]>arr[j+1] )
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
    cout << "Sorted array is: \t";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}