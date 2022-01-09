package main

import "fmt"

func binarySearch(x int, a []int) int {
	left := 0
	right := len(a) - 1

	for i := left; i <= right; i++ {
		mid := (left + right) / 2
		if a[mid] == x {
			return mid
		} else if a[mid] < x {
			left = mid + 1
		} else {
			right = mid - 1
		}
	}
	return -1
}

func main() {

	arr := []int{1, 2, 9, 20, 31, 45, 63, 70, 100}
	x := 100
	fmt.Println(x, " is at index ", binarySearch(x, arr), ".")
}
