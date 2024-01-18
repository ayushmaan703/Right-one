/*print an matrix in spriral order */
#include <iostream>
#include <vector>
using namespace std;
void printInSprial(vector<vector<int>> mat)
{
    int row, col;
    int top = 0;
    int bottom = mat.size() - 1;
    int right = mat[0].size() - 1;
    int left = 0;
    int dir = 0;
    while (left <= right && top <= bottom)
    {
        if (dir == 0)
        {
            for (col = left; col <= right; col++)
            {
                cout << mat[top][col];
            }
            top++;
        }
        else if (dir == 1)
        {
            for (row = top; row <= bottom; row++)
            {
                cout << mat[row][right];
            }
            right--;
        }
        else if (dir == 2)
        {
            for (col = right; col >= left; col--)
            {
                cout << mat[bottom][col];
            }
            bottom--;
        }
        else
        {
            for (row = bottom; row >= top; row--)
            {
                cout << mat[row][left];
            }
            left++;
        }
        dir = (dir + 1) % 4;
    }
    return;
}

int main()
{
    int i, j, row, col;
    cout << "Enter the number of rows: \n";
    cin >> row;
    cout << "Enter the number of columns: \n";
    cin >> col;
    vector<vector<int>> mat(row, vector<int>(col));
    cout << "enter the matrix: \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    printInSprial(mat);

    return 0;
}
