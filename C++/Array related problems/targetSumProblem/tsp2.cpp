/*find the total number of pairs in the arr whose sum is = the given sum x */

#include <iostream>
using namespace std;
int main()
{
    int n, i, x, j, count = 0, k;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum : ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == x)
                    count++;
            }
        }
    }
    cout << "frequency of " << x << " is: " << count;

    return 0;
}