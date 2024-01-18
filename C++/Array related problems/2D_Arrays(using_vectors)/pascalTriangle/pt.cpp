/*making an pascal triangle of n rows using vectors and using the addtion method*/
/*this can also be done by just calculating the combination and printing it*/
#include <iostream>
#include <vector>
using namespace std;
void pascalTriangle(int n)
{
    vector<vector<int>> v(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        v[i].resize(i + 1);
        for (j = 0; j < i+1; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    cout << "The pascal triangle for " << n << " rows is \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            cout << v[i][j];
        }
        cout << "\n";
    }
}
int main()
{
    int rows;
    cout << "enter the number of rows for the pascal triangle: ";
    cin >> rows;
    pascalTriangle(rows);
    return 0;
}
