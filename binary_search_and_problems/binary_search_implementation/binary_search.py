def binary_search(lst, target):
    left = 0
    right = len(lst) - 1
    while right >= left:
        mid = int((left + right) / 2)
        if lst[mid] == target:
            return mid
        elif lst[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1


lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
target = 9

print(f"{target} is at index {binary_search(lst, target)}.")
