#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> matrix(n, vector<int>(n));

        if (n <= 0)
            return matrix;
        int firstRow = 0, lastRow = n - 1, firstColumn = 0, lastColumn = n - 1, num = 1;
        while (firstRow <= lastRow && firstColumn <= lastColumn)
        {
            for (int c = firstColumn; c <= lastColumn; c++)
            {
                matrix[firstRow][c] = num++;
            }
            for (int r = firstRow + 1; r <= lastRow; r++)
            {
                matrix[r][lastColumn] = num++;
            }
            if (firstRow <= lastRow && firstColumn <= lastColumn)
            {
                for (int c = lastColumn - 1; c > firstColumn; c--)
                {
                    matrix[lastRow][c] = num++;
                }
                for (int r = lastRow; r > firstRow; r--)
                {
                    matrix[r][firstColumn] = num++;
                }
            }

            firstRow++;
            lastRow--;
            firstColumn++;
            lastColumn--;
        }
        return matrix;
    }
};

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j];
            if (matrix[i][j] < 10)
                cout << "      ";
            else if (matrix[i][j] < 100 && matrix[i][j] >= 10)
                cout << "     ";
            else
                cout << "    ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------------" << endl;
}

int main(int argc, char const *argv[])
{
    int n = 3;
    Solution sol;
    vector<vector<int>> matrix = sol.generateMatrix(n);
    printMatrix(matrix);
    return 0;
}
