#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    void rotate(vector<vector<int>> &matrix)
    {
        int level = 0, lastElement = matrix.size() - 1, totalMatrixLevel = matrix.size() / 2;
        while (level < totalMatrixLevel)
        {
            for (int i = level; i < lastElement; i++)
            {
                swap(matrix[i][lastElement], matrix[level][i]);
                swap(matrix[lastElement][lastElement - i + level], matrix[level][i]);
                swap(matrix[lastElement - i + level][level], matrix[level][i]);
            }

            level++;
            lastElement--;
        }
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

vector<vector<int>> buildMatrix(int &n)
{
    vector<vector<int>> matrix(n, vector<int>(n));
    int number = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = number++;
        }
    }
    return matrix;
}

int main(int argc, char const *argv[])
{
    int n = 4;

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    cout << "------------------ Original matrix -------------------------" << endl;
    printMatrix(matrix);

    cout << "------------------ Rotated matrix -------------------------" << endl;
    Solution sol;
    sol.rotate(matrix);
    printMatrix(matrix);

    return 0;
}
