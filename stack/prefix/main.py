from typing import List


class Solution:
    def __isAnOperand(self, c: str) -> bool:
        return c.isdigit()

    def evaluatePrefix(self, expression: str) -> int:
        stack: List[int] = []
        for c in expression[::-1]:
            print(f"Exp: {c}")
            if self.__isAnOperand(c):
                stack.append(int(c))
            else:
                stackTop: int = stack.pop()
                print(f"stackTop: {stackTop}")
                nextStackTop: int = stack.pop()
                print(f"nextStackTop: {nextStackTop}")

                if c == "+":
                    stack.append(stackTop + nextStackTop)
                elif c == "-":
                    stack.append(stackTop - nextStackTop)
                elif c == "*":
                    stack.append(stackTop * nextStackTop)
                elif c == "/":
                    stack.append(stackTop // nextStackTop)
        return stack.pop()


exp: str = "-+7*45+20"
sol: Solution = Solution()
print(sol.evaluatePrefix(exp))
