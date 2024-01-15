/*find the prefic sum of a array without using a new array*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }
    cout << "the prefix/running sum of the given array is: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
