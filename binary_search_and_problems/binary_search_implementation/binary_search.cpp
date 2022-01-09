#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int arrayLength, int target)
{
    int left = 0, right = arrayLength - 1;
    while (right >= left)
    {
        int mid = (right + left) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9};
    int n = sizeof(arr) / sizeof(arr[0]), x = 10;

    cout << x << " is at index " << binarySearch(arr, n, x) << "." << endl;
    return 0;
}
