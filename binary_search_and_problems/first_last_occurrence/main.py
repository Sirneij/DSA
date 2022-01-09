from typing import List


class Solution:
    def __binary_search(self, nums: List[int], target: int, first: bool = True) -> int:
        low: int = 0
        high: int = len(nums) - 1
        result: int = -1
        while high >= low:
            mid: int = int((high + low) / 2)
            if nums[mid] == target:
                result = mid

                if first:
                    high = mid - 1  # search for occurrence at lower indices
                else:
                    low = mid + 1  # search for occurrene at higher indices
            elif nums[mid] < target:
                low = mid + 1
            else:
                high = mid - 1
        return result

    def searchRange(self, nums: List[int], target: int) -> List[int]:

        """
        Parameters
        ----------
        nums : List[int]
            - the sorted list of integers.

        target : int
            - the targetted element to be searched.
        Returns
        -------
        List[int]

            - a list of the first and last occurrences
        """

        return [
            self.__binary_search(nums, target),
            self.__binary_search(nums, target, False),
        ]


nums: List[int] = [3, 3, 3]
target: int = 3

sol: Solution = Solution()

print(sol.searchRange(nums, target))
