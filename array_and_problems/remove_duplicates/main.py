from typing import List


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        return len(list(dict.fromkeys(nums)))


nums: List[int] = [1]
sol: Solution = Solution()
print(f"Output: {sol.removeDuplicates(nums)}")
