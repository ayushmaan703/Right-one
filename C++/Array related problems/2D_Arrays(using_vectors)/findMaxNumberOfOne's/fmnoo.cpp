/*find the row with the max number of one's in it and the given matrix is sorted*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, row, col, rowOfMaxOne;
    cout << "Enter the number of rows: \n";
    cin >> row;
    cout << "Enter the number of columns: \n";
    cin >> col;
    vector<vector<int>> mat(row, vector<int>(col));
    int firstOcuranceOfOne = col;
    cout << "enter the matrix: \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < firstOcuranceOfOne; j++)
        {
            if (mat[i][j] == 1)
            {
                firstOcuranceOfOne = j;
                rowOfMaxOne = i;
                break;
            }
        }
    }
    cout << rowOfMaxOne+1<< "'nd row has the max number of one's." ;

    return 0;
}