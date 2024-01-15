/*sort an array consisting of 0 and 1*/
// USING THE NORMAL APPROACH
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, j, zeroCount = 0;
//     cout << "Enter the size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of array: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             zeroCount++;
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (i < zeroCount)
//             arr[i] = 0;
//         else
//             arr[i] = 1;
//     }
//     cout << "sorted array is ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// USING THE TWO POINTER APPROACH
#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int leftPtr = 0, rightPtr = n-1;
    while (leftPtr < rightPtr)
    {
        if (arr[leftPtr] == 1 && arr[rightPtr] == 0)
        {
            arr[leftPtr++] = 0;
            arr[rightPtr--] = 1;
        }
        if (arr[leftPtr] == 0)
            leftPtr++;
        if (arr[rightPtr] == 1)
            rightPtr--;
    }
        cout << "sorted array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
