// package main

// import (
// 	"fmt"
// 	"sort"
// )

// func binarySearch(nums []int, target int, first bool) int {
// 	sort.Ints(nums)
// 	left := 0
// 	right := len(nums) - 1
// 	result := -1

// 	for i := left; i <= right; i++ {
// 		mid := (left + right) / 2
// 		if nums[mid] == target {
// 			result = mid
// 			if first {
// 				right = mid - 1
// 			} else {
// 				left = mid + 1
// 			}
// 		} else if nums[mid] < target {
// 			left = mid + 1
// 		} else {
// 			right = mid - 1
// 		}
// 	}
// 	return result
// }

// func targetIndices(nums []int, target int) []int {
// 	result := []int{}
// 	if binarySearch(nums, target, true) >= 0 {
// 		j := 0
// 		for i := binarySearch(nums, target, true); i <= binarySearch(nums, target, false); i++ {
// 			result[j] = i
// 			j++
// 		}
// 	}
// 	return result
// }

// func main() {
// 	nums := []int{1, 2, 5, 2, 3}
// 	target := 2
// 	ans := targetIndices(nums, target)
// 	for _, v := range ans {
// 		fmt.Println(v)
// 	}
// }
