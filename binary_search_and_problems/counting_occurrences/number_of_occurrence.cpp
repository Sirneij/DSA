#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int arrayLength, int target, bool first = true)
{
    int low = 0, high = arrayLength - 1, result = -1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (array[mid] == target)
        {
            result = mid;
            if (first)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int number_of_occurrence(int arr[], int n, int x)
{
    int result = binarySearch(arr, n, x, false) - binarySearch(arr, n, x);
    if (result > 0)
        result += 1;

    return result;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 9, 9, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]), x = 12;

    cout << x << " occurs " << number_of_occurrence(arr, n, x) << " time(s)." << endl;
    return 0;
}
