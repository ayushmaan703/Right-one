// find sum of digit of a number
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n >= 0 && n <= 9)
        return n;
    return (sum(n / 10) + (n % 10));
}
int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    cout << "Sum of the digits of " << n << " is " << sum(n) << "\n";
    return 0;
}