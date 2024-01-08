#include <iostream>
using namespace std;
int main()
{
    int num, i, sum;
    cout << "Enter a number to be checked:";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << num << " is a perfect number.\n";
    else
        cout << num << " is not a perfect number.\n";

    return 0;
}