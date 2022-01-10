/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
const binarySearch = (nums, target, first = true) => {
  nums.sort(function (a, b) {
    return a - b;
  });
  let left = 0,
    right = nums.length - 1,
    result = -1;
  while (right >= left) {
    let mid = parseInt((left + right) / 2);
    if (nums[mid] === target) {
      result = mid;
      first ? (right = mid - 1) : (left = mid + 1);
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return result;
};
var targetIndices = function (nums, target) {
  let result = [];
  const firstOccurrence = binarySearch(nums, target),
    secondOccurrence = binarySearch(nums, target, false);
  const len = secondOccurrence - firstOccurrence;
  if (firstOccurrence >= 0) {
    for (let index = firstOccurrence; index <= secondOccurrence; index++) {
      result.push(index);
    }
  }
  return result;
};

let nums = [1],
  target = 1;

let res = targetIndices(nums, target);
res.forEach((e) => console.log(e));
