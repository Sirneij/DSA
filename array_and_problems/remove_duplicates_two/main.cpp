#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    int binarySearch(vector<int> &nums, int target, bool first = true)
    {
        int low = 0, high = nums.size() - 1, result = -1;
        while (high >= low)
        {
            int mid = (high + low) / 2;
            if (nums.at(mid) == target)
            {
                result = mid;
                first ? high = mid - 1 : low = mid + 1;
            }
            else if (nums.at(mid) < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return result;
    }
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

public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() <= 0)
            return 0;
        int counter = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            int diff = binarySearch(nums, nums.at(counter), false) - binarySearch(nums, nums.at(counter));
            if (diff <= 1)
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