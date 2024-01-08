#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, n1 = 1, n2 = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if ((i - j) > 0)
                cout << n1-- << " ";
            else
                cout << n2++ << " ";
        }
        cout << "\n";
        n2 = 0;
        n1 = i;
    }
    return 0;
}