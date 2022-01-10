#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.at(i) != 0)
            {
                nums.at(counter) = nums.at(i);
                counter++;
            }
        }
        for (int i = counter; i < nums.size(); i++)
        {
            nums.at(i) = 0;
        }

        cout << "[";
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums.at(i);
            if (i < nums.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 0, 3, 0, 12};
    Solution sol;
    sol.moveZeroes(nums);
    return 0;
}
