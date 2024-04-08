#include <iostream>
#include <vector>
using namespace std;
int n;
void countSort(int arr[])
{
    int maxEle = INT8_MIN, i;
    for (i = 0; i < n; i++)
    {
        maxEle = max(arr[i], maxEle);
    }
    vector<int> freq(maxEle + 1, 0);
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (i = 1; i <= maxEle; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<int> ansArr(n);
    for (i = n - 1; i >= 0; i--)
    {
        ansArr[--freq[arr[i]]] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = ansArr[i];
    }
}
int main()
{
    cout << "enter the size of array: \n";
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countSort(arr);
    cout << "sorted array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"  ";
    }
    return 0;
}