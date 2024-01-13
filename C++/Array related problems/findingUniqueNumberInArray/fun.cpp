/*find the unique element in a array where all the elements are repeated twice and one element is unique*/
/*runs only for number repeated in pairs not in triplets or others*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, x, j;
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
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                arr[i] = arr[j] = -1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != -1)
            cout << "The unique element is " << arr[i];
    }
    return 0;
}