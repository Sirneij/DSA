from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        counter = 0
        for i, _ in enumerate(nums):
            if nums[i] != val:
                nums[counter] = nums[i]
                counter += 1

        return counter


nums: List[int] = [0, 1, 2, 2, 3, 0, 4, 2]
val: int = 2

sol: Solution = Solution()
print(f"Output: {sol.removeElement(nums, val)}")
