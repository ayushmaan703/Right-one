// this is for sorting in assending order
#include <iostream>
using namespace std;
void merge(int arr[], int startpoint, int mid, int endpoint)
{
    int i=0, j=0, k = startpoint;
    int tempArr1Size = mid - startpoint + 1;
    int tempArr2Size = endpoint - mid;
    int arr1[tempArr1Size];
    int arr2[tempArr2Size];
    for (i = 0; i < tempArr1Size; i++)
    {
        arr1[i] = arr[startpoint + i];
    }
    for (i = 0; i < tempArr2Size; i++)
    {
        arr2[i] = arr[mid + 1 + i];
    }
    i=0, j=0;
    while (i < tempArr1Size && j < tempArr2Size)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < tempArr1Size)
    {
        arr[k++] = arr1[i++];
    }

    while (j < tempArr2Size)
    {
        arr[k++] = arr2[j++];
    }
}
void mergeSort(int arr[], int startpoint, int endpoint)
{ 
    if (startpoint >= endpoint)
        return;
    int mid = (startpoint + endpoint) / 2;
    mergeSort(arr, startpoint, mid);
    mergeSort(arr, mid + 1, endpoint);
    merge(arr, startpoint, mid, endpoint);
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
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array is: \t";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}