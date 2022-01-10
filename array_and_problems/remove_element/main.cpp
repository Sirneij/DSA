#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.at(i) != val)
            {
                nums.at(counter) = nums.at(i);
                ++counter;
            }
        }
        return counter;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 0;
    Solution sol;
    cout << sol.removeElement(nums, val) << endl;
    return 0;
}
