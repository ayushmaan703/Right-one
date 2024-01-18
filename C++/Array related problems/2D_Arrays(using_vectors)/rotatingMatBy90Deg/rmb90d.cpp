/*roatate a matrix by 90 deg without using any other array */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
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
    // first we will cal the transpose of the given matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    //now we will rev the transposed matrix
    for (i = 0; i < row; i++)
    {
     reverse(mat[i].begin(),mat[i].end());
    }
    cout<<"the rotated matrix is : \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
