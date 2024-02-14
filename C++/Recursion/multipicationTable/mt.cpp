/*print n * m where 'n' a given number which must be multiplied till m
if n=2 m=3
then
2*1
2*2
2*3*/
#include <iostream>
using namespace std;
void table(int n, int m)
{
    if (m == 0)
        return;
    table(n, m - 1);
    cout << (n * m) << " ";
}
int main()
{
    table(2, 3);
    return 0;
}