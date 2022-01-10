#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void printVector(vector<int> &nums)
    {
        cout << "[";
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums.at(i);
            if (i < nums.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() <= 0)
            return 0;
        int counter = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums.at(counter) != nums.at(i))
            {
                counter++;
                nums.at(counter) = nums.at(i);
            }
        }
        printVector(nums);
        return counter + 1;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 4, 4, 5};
    Solution sol;
    cout << sol.removeDuplicates(nums) << endl;
    return 0;
}
