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
    int removeDuplicates(vector<int> &nums)
    {
    }
};
