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
    for (i = 1; i < n; i++)
    {
        int currentEle = arr[i];
        int j = i - 1;
        while (j >= 0 && (arr[j] > currentEle))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currentEle;
    }
    cout << "Sorted array is: \t";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}