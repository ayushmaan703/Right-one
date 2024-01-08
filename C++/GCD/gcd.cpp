#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i, gcd;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd;
    return 0;
}