/*given a matrix n*m and 2 coord (a,b) and (c,d) return the sum b/t the rectangle formed by the coords */
// can be done in 3 ways
// 1.directly looping through the given coord
// 2.using prefix sum for row
// 3.using prefix sum of both row and col
// here i am doing it by method 3
#include <iostream>
#include <vector>
using namespace std;
int findGivenSum(vector<vector<int>> &mat)
{
    int i, j, a, b, c, d, sum, topSum, leftSum, topLeftSum;
    cout << "enter the first coords: \n";
    cin >> a >> b;
    cout << "enter the second coords: \n";
    cin >> c >> d;
    for (i = 0; i < mat.size(); i++)
    {
        for (j = 1; j < mat[i].size(); j++)
        {
            mat[i][j] += mat[i][j - 1];
        }
    }
    for (i = 1; i < mat.size(); i++)
    {
        for (j = 0; j < mat[i].size(); j++)
        {
            mat[i][j] += mat[i - 1][j];
        }
    }
    if (a != 0)
        topSum = mat[a - 1][d];
    if (b != 0)
        leftSum = mat[c][b - 1];
    if (a != 0 && b != 0)
        topLeftSum = mat[a - 1][b - 1];
    sum = mat[c][d] - topSum - leftSum + topLeftSum;
    return sum;
}
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
    int sum = findGivenSum(mat);
    cout << "the sum is: ";
    cout << sum;
    return 0;
}
