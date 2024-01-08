#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    float sum;
    cout << "Enter the number till you want the series: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / (pow(i, i));
    }
    cout << "The sum of series 1/1^1 + 1/2^2 + 1/3^3 +....1/n^n is " << sum << "\n";
    return 0;
}