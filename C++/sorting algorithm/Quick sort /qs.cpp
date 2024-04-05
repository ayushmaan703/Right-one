#include <iostream>
using namespace std;
int pivot(int arr[], int first, int last)
{
    int pivotEle = arr[last];
    int i = first - 1;
    int j = first;
    for (; j < last; j++)
    {
        if (arr[j] < pivotEle)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[j]);
    return i + 1;
}
void quickSort(int arr[], int first, int last)
{
    if (first >= last)
        return;
    int pivotIndex = pivot(arr, first, last);
    quickSort(arr, first, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, last);
}
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
    quickSort(arr, 0, n - 1);
    cout << "Sorted array is: \t";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}