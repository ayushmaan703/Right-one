// given a number n print till it
#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    cout << n << " ";
}
int main()
{
    print(5);
    return 0;
}