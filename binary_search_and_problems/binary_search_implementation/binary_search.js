const binarySearch = (arr, tar) => {
  let left = 0,
    right = arr.length - 1;
  while (right >= left) {
    let mid = parseInt((left + right) / 2);
    if (arr[mid] === tar) {
      return mid;
    } else if (arr[mid] < tar) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
};

const arr = [1, 2, 9, 20, 31, 45, 63, 70, 100];
const tar = 63;

console.log(tar, " is at index ", binarySearch(arr, tar), ".");
