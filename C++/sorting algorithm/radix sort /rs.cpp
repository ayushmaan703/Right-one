// isse tab use kare ge jab given number me kafi disparity ho
#include <iostream>
#include <vector>
using namespace std;
int n;
void countSort(int arr[], int pos)
{
    int i;
    vector<int> freq(10, 0);
    for (i = 0; i < n; i++)
    {
        freq[(arr[i] / pos) % 10]++; /*phele ham yha jo ele ha uske freq nikal re the par ab ham once / tens or pos me jo ele present ha uske freq nikal re ha jo ke obviosly 0 to 9 hi hoge */
    }
    for (i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<int> ansArr(n);
    for (i = n - 1; i >= 0; i--)
    {
        ansArr[--freq[(arr[i] / pos) % 10]] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = ansArr[i];
    }
}
void radixSort(int arr[])
{
    int maxEle = -1;
    for (int i = 0; i < n; i++)
    {
        maxEle = max(arr[i], maxEle);
    }
    for (int i = 1; maxEle / i > 0; i = i * 10)
    {
        // position ke hisab se sort karne ke liye phle max ele nikala or aab count sort ko beje ge arr ke kis position ke hisab se aab sort karna ha and 'i' is that pos
        countSort(arr, i);
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
    radixSort(arr);
    cout << "sorted array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}
