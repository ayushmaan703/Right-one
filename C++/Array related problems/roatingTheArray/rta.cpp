/*rotate a array by k steps, k is a non negative integer and can be greater than the size of array*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, k, j = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n], rotatedArray[n];
    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the amount by which array should roatated: ";
    cin >> k;
    k %= n; // issliye kiya ha kyuki jab k ka size array se bada hoga to har n rotation ke baad rotated array same aaega to konse rotation me jana ha vo isse direct hi nikal dege
    for (i = n - k; i < n; i++)
    {
        rotatedArray[j++] = arr[i];
    }
    for (i = 0; i < k; i++)
    {
        rotatedArray[j++] = arr[i];
    }
    cout << "Rotated array is ";
    for (i = 0; i < n; i++)
    {
        cout << rotatedArray[i] << " ";
    }
    return 0;
}