# Count Zeros in a Sorted Matrix

## 📝 Problem Statement

This exercise focuses on counting the number of zeros in a **sorted binary matrix**. You are given an `n x m` matrix where each row is sorted in non-decreasing order (0s followed by 1s). The task is to count all zeros in the matrix efficiently.  

---

---

## 📥 Input

- First line: two integers `n` and `m`, the number of rows and columns  
- Next `n` lines: `m` space-separated integers (0 or 1) representing each row of the matrix

**Note:**  
Do not read input from `stdin` or console. The function will receive the matrix as input.

---

---

## 📤 Output

_Output format not specified in original README._

---

## 🔍 Examples

3 4
0 0 1 1
0 0 0 1
0 1 1 1

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(n + m)\) if using optimized row-wise traversal, \(O(n \log m)\) if using binary search per row

**Space Complexity:** ** \(O(1)\), as only a counter is needed

---

## 🔁 Original README

# Count Zeros in a Sorted Matrix

## Problem Description
This exercise focuses on counting the number of zeros in a **sorted binary matrix**. You are given an `n x m` matrix where each row is sorted in non-decreasing order (0s followed by 1s). The task is to count all zeros in the matrix efficiently.  

---

## Function Description
Complete the `countZeros` function with the following parameters:

- **matrix**: a 2D list (or array) representing the `n x m` sorted matrix  

**Return Requirement:**  
Return an integer representing the total number of zeros in the matrix.

---

## Input Format
- First line: two integers `n` and `m`, the number of rows and columns  
- Next `n` lines: `m` space-separated integers (0 or 1) representing each row of the matrix

**Note:**  
Do not read input from `stdin` or console. The function will receive the matrix as input.

---

## Constraints
- \(1 \leq n, m \leq 10^3\)  
- Each element is either `0` or `1`  
- Rows are sorted in non-decreasing order

---

## Sample Input
3 4
0 0 1 1
0 0 0 1
0 1 1 1

## Sample Output
6

### Explanation
- Row 1: 0 0 1 1 → 2 zeros  
- Row 2: 0 0 0 1 → 3 zeros  
- Row 3: 0 1 1 1 → 1 zero  
- Total zeros = 2 + 3 + 1 = 6

---

## Complexity Analysis
- **Time Complexity:** \(O(n + m)\) if using optimized row-wise traversal, \(O(n \log m)\) if using binary search per row  
- **Space Complexity:** \(O(1)\), as only a counter is needed
