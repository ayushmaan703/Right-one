/*check if we can partition the arrary into 2 sub arrays with equal sum or check the prefix sum of a part of a array is equal to the suffix sum the rest of array */
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, index = 0;
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
    for (i = 0; i < n; i++)
    {
        if ((sum - arr[i]) == arr[i])
        {
            index = 1;
            break;
        }
    }
    cout << index;
    return 0;
}
