/*sort the elements of the array in non dec after squaring it number can be positive or negative*/
/*isme 2 pointer method pta ne kaise lage ga par deka jae to ye bhi ek 2 pointer approach hi ha jis me i and j are working as left and right pointer aab agar ham j ko starting se na chala kar last se chalae to vo right pointer ke thra behave kare*/

#include <iostream>
using namespace std;
void sort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "the new squared and sorted array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] * arr[i] << " ";
    }
}
void absValue(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i]);
    }
    sort(arr, n);
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
    absValue(arr, n);
    return 0;
}