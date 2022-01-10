from typing import List
import timeit


class Solution:
    def __binarySearch(self, nums: List[int], target: int, first: bool = True) -> int:
        nums.sort()
        low: int = 0
        high: int = len(nums) - 1
        result: int = -1
        while high >= low:
            mid: int = (low + high) // 2

            if nums[mid] == target:
                result = mid

                if first:
                    high = mid - 1
                else:
                    low = mid + 1

            elif nums[mid] < target:
                low = mid + 1

            else:
                high = mid - 1

        return result

    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        return (
            list(
                x
                for x in range(
                    self.__binarySearch(nums, target),
                    self.__binarySearch(nums, target, False) + 1,
                )
            )
            if self.__binarySearch(nums, target) >= 0
            else []
        )


nums: List[int] = [1, 2, 5, 2, 3]
target: int = 2

sol: Solution = Solution()

print(sol.targetIndices(nums, target))
