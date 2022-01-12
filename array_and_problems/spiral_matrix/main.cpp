#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> spiralMatrix = {};
        if (matrix.size() <= 0)
            return spiralMatrix;
        int firstRow = 0, lastRow = matrix.size() - 1;
        int firstColumn = 0, lastColumn = matrix[0].size() - 1;
        while ((firstRow <= lastRow) && (firstColumn <= lastColumn))
        {
            for (int i = firstColumn; i <= lastColumn; i++)
            {
                spiralMatrix.push_back(matrix[firstRow][i]);
            }
            for (int i = firstRow + 1; i <= lastRow; i++)
            {
                spiralMatrix.push_back(matrix[i][lastColumn]);
            }
            if (firstRow < lastRow && firstColumn < lastColumn)
            {
                for (int i = lastColumn - 1; i > firstColumn; i--)
                {
                    spiralMatrix.push_back(matrix[lastRow][i]);
                }
                for (int i = lastRow; i > firstRow; i--)
                {
                    spiralMatrix.push_back(matrix[i][firstColumn]);
                }
            }

            firstRow++;
            firstColumn++;
            lastRow--;
            lastColumn--;
        }
        return spiralMatrix;
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution sol;
    vector<int> spiral = sol.spiralOrder(matrix);
    cout << "[";
    for (int i = 0; i < spiral.size(); i++)
    {
        cout << spiral.at(i);
        if (i < spiral.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
