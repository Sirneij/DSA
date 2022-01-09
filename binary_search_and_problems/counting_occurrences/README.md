# [Find the number of occurrences of an element in a sorted array](https://leetcode.com/discuss/interview-question/124724/)

Given a sorted array of `n` elements, possibly with duplicates, find the number of occurrences of the `target` element.

## Examples

- ### First

  ```
  Input: array = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
  Output: 8 occurs 3 time(s) at [2, 3, 4]
  ```

- ### Second
  ```
  Input: arr = [3, 5, 5, 5, 5, 7, 8, 8], target = 6
  Output: 6 occurs 0 time(s) at []
  ```
- ### Third

```
Input: arr = [3, 5, 5, 5, 5, 7, 8, 8], target = 5
Output: 5 occurs 4 time(s) at [1, 2, 3, 4]
```

Expected time complexity is $O(\log n)$ and space complexity is $O(1)$
