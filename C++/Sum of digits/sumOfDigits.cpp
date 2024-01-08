#include <iostream>
using namespace std;
int main()
{
    int num, rem, sum;
    cout << "Enter any number:";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout << "Sum of it's digits is " << sum << "\n";
    return 0;
}