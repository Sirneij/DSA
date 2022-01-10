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

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> result = {binarySearch(nums, target), binarySearch(nums, target, false)};
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 4, 5}; //{1,2,3,4,4,4,5};
    int target = 4;

    Solution sol;

    vector<int> ans = sol.searchRange(nums, target);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i);
        if (i < ans.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}