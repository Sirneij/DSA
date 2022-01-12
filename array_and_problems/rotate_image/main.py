from typing import List


class Solution:
    def __swap(self, a: int, b: int) -> None:
        temp: int = a
        a = b
        b = temp

    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        level: int = 0
        lastElement: int = len(matrix) - 1
        totalMatrixLevel: int = len(matrix) // 2

        while level < totalMatrixLevel:
            for i in range(level, lastElement):
                self.__swap(matrix[i][lastElement], matrix[level][i])
                self.__swap(
                    matrix[lastElement][lastElement - i + level], matrix[level][i]
                )
                self.__swap(matrix[lastElement - i + level][level], matrix[level][i])
            level += 1
            lastElement -= 1


def printMatrix(matrix: List[List[int]]):
    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            print(matrix[i][j], end=" ")


def buildMatrix(n: int) -> List[List[int]]:
    number: int = 0
    matrix: List[List[int]] = []
    for x in range(n):
        column_elements = []

        for y in range(n):
            # Enter the all the values w.r.t to a particular column
            column_elements.append(number)
            number += 1
        # Append the column to the array.
        matrix.append(column_elements)
    return matrix


# n: int = 8
# printMatrix(buildMatrix(n))

matrix: List[List[int]] = [
    [5, 1, 9, 11],
    [2, 4, 8, 10],
    [13, 3, 6, 7],
    [15, 14, 12, 16],
]

sol: Solution = Solution()
sol.rotate(matrix)
