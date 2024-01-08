#include <iostream>
using namespace std;
int main()
{
    int num, i, f = 1;
    cout << "enter number for factorial:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        f *= i;
    }
    cout << "factorial of " << num << " is " << f << "\n";
    return 0;
}