# Spirally Traversing a Matrix

## 📝 Problem Statement

This exercise focuses on traversing a 2D matrix in **spiral order**. You are given an `n x m` matrix, and the task is to return all elements of the matrix in a clockwise spiral order, starting from the top-left corner.

---

---

## 📥 Input

- First line: two integers `n` and `m`, number of rows and columns  
- Next `n` lines: `m` space-separated integers representing the matrix rows

**Note:**  
Do not read input from `stdin` or console. The function will receive the matrix as input.

---

---

## 📤 Output

_Output format not specified in original README._

---

## 🔍 Examples

3 3
1 2 3
4 5 6
7 8 9

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(n \cdot m)\), as every element is visited exactly once

**Space Complexity:** ** \(O(1)\) additional space if storing output in a list

---

## 🔁 Original README

# Spirally Traversing a Matrix

## Problem Description
This exercise focuses on traversing a 2D matrix in **spiral order**. You are given an `n x m` matrix, and the task is to return all elements of the matrix in a clockwise spiral order, starting from the top-left corner.

---

## Function Description
Complete the `spiralOrder` function with the following parameters:

- **matrix**: a 2D list (or array) representing the `n x m` matrix  

**Return Requirement:**  
Return a list (or array) of integers representing the elements of the matrix in spiral order.

---

## Input Format
- First line: two integers `n` and `m`, number of rows and columns  
- Next `n` lines: `m` space-separated integers representing the matrix rows

**Note:**  
Do not read input from `stdin` or console. The function will receive the matrix as input.

---

## Constraints
- \(1 \leq n, m \leq 1000\)  
- Elements can be any integer within the signed 32-bit range

---

## Sample Input
3 3
1 2 3
4 5 6
7 8 9

## Sample Output
1 2 3 6 9 8 7 4 5

### Explanation
The spiral traversal of the matrix is:  
1 → 2 → 3 → 6 → 9 → 8 → 7 → 4 → 5

---

## Complexity Analysis
- **Time Complexity:** \(O(n \cdot m)\), as every element is visited exactly once  
- **Space Complexity:** \(O(1)\) additional space if storing output in a list
