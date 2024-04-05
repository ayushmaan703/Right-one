// this is for sorting in assending order
#include <iostream>
using namespace std;
int main()
{
    int n, i, j, check = 0;
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
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) // condition for decending order (arr[j]<arr[j+1] )
            {
                swap(arr[j], arr[j + 1]);
                check++;
            }
        }
        if (check == 0) // putting a check incase the array is nearly sorted
        {
            break;
        }
        check = 0;
    }
    cout << "Sorted array is: \t";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}