def binary_search(lst: list, target: int, first: bool = True) -> int:
    """A generic binary search algorithm implementation

    Parameters
    ----------
    lst : list
        The sorted list(array) to be searched
    target : int
        The element to be fished out. If in the list, its index will be returned by the function else? -1 will be returned.
    first : bool, optional
        A boolean field that instructs the function to return the element's first occurrence or not in case of duplicates. If not provided, the default is True

    Returns
    -------
    int
        - The index of the element if found or -1 if not

    """
    left: int = 0
    right: int = len(lst) - 1
    result: int = -1
    while right >= left:
        mid: int = int((left + right) / 2)
        if lst[mid] == target:
            result = mid
            if first:
                right = mid - 1
            if not first:
                left = mid + 1
        elif lst[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return result


def count_occurrence(lst: list, target: int) -> int:
    """
    Calculates the occurrence of the element

    Parameters
    ----------

    lst : list
        The sorted list(array) to be searched

    target : int
        The element to be fished out.


    Returns
    -------
    int
        - The number of occurrence of the target element

    """
    result: int = binary_search(lst, target, False) - binary_search(lst, target)
    if result:
        result += 1
    return result


def indices_of_occurrence(lst: list, target: int) -> list:
    """
    List the index(ices) the target element is found

    Parameters
    ----------
    lst : list
        The sorted list(array) to be searched

    target : int
        The element to be fished out.


    Returns
    -------
    list
        - The sorted list of index(ices) the target element is found
    """
    result: list = []
    if binary_search(lst, target, False) - binary_search(lst, target):
        result = [x for x in range(binary_search(lst, target), binary_search(lst, target, False) + 1)]
    return result


lst: list = [3, 5, 5, 5, 5, 7, 8, 8]
x: int = 5


print(f"{x} occurs {count_occurrence(lst, x)} time(s) at {indices_of_occurrence(lst, x)}")
