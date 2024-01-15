/*given an array of n integer ans q queries where you need to print sum between the given range*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, l, r, ans;
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
    int q;
    cout << "enter the number of qureies you want: ";
    cin >> q;
    while (q--)
    {
        cout << "enter the range: ";
        cin >> l >> r;
        l -= 1;
        r -= 1;
        ans = arr[r] - arr[l - 1];
        cout << "the sum  of the given range is: " << ans << "\n";
        ans = 0;
    }

    return 0;
}
// there is slight error in this ocurrs abrubtly