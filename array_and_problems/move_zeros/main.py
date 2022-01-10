from typing import List


class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        counter = 0
        for i, _ in enumerate(nums):
            if nums[i] != 0:
                nums[counter] = nums[i]
                counter += 1

        for i in range(counter, len(nums)):
            nums[i] = 0

        print(nums)


nums: List[int] = [1, 0, 4, 3, 0, 12]

sol: Solution = Solution()
sol.moveZeroes(nums)
