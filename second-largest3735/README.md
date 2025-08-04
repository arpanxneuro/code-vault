# Second Largest

**Difficulty:** Easy  
**Platform:** GeeksforGeeks  

## Problem Statement

Given an array of positive integers `arr[]`, return the second largest element from the array. If the second largest element doesn't exist (i.e., all elements are the same), return `-1`.

The second largest element must be **strictly less** than the largest (i.e., should not be equal).

## Examples

### Example 1
**Input:**  
`arr[] = [12, 35, 1, 10, 34, 1]`  
**Output:**  
`34`  
**Explanation:**  
The largest element is `35`, and the second largest is `34`.

---

### Example 2  
**Input:**  
`arr[] = [10, 5, 10]`  
**Output:**  
`5`  
**Explanation:**  
The largest element is `10`, second largest is `5`.

---

### Example 3  
**Input:**  
`arr[] = [10, 10, 10]`  
**Output:**  
`-1`  
**Explanation:**  
All elements are the same, so second largest doesn't exist.

## Constraints

- `2 ≤ arr.length ≤ 10⁵`
- `1 ≤ arr[i] ≤ 10⁵`

## Approach

- Initialize `first` and `second` as -1.
- Traverse the array:
  - If `arr[i]` > `first`, update `second = first` and `first = arr[i]`.
  - Else if `arr[i]` < `first` and `arr[i]` > `second`, update `second = arr[i]`.
- Return `second` if valid, otherwise return `-1`.

## Time and Space Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
