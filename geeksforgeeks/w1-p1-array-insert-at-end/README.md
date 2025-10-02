# Constraints:

## 📝 Problem Statement

- `1 ≤ arr.size() ≤ 10⁵`
- `0 ≤ arr[i], val ≤ 10⁶`

---

---

## 📥 Input

- `arr[]`: An array of integers (not completely filled).
- `val`: An integer to be inserted at the end.

---

## 📤 Output

- Return the updated array with `val` inserted at the end.

---

---

## 🔍 Examples

_No examples provided in original README._

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## 🔁 Original README

# 🧮 Array Insert at End

> **Difficulty**: Basic  
> **Accuracy**: 87.65%  
> **Submissions**: 66K+  
> **Points**: 1

---

## 📝 Problem Statement

Given a partially-filled array `arr[]` and an integer value `val`, your task is to insert the value at the **end of the array**.

---

## 📥 Input

- `arr[]`: An array of integers (not completely filled).
- `val`: An integer to be inserted at the end.

### Constraints:

- `1 ≤ arr.size() ≤ 10⁵`
- `0 ≤ arr[i], val ≤ 10⁶`

---

## 📤 Output

- Return the updated array with `val` inserted at the end.

---

## ✅ Examples

### Example 1:
Input:
arr = [1, 2, 3, 4, 5]
val = 90

Output:
[1, 2, 3, 4, 5, 90]

Explanation:
After inserting 90 at the end, the array becomes [1, 2, 3, 4, 5, 90].

shell
Copy
Edit

### Example 2:
Input:
arr = [1, 2, 3]
val = 50

Output:
[1, 2, 3, 50]

Explanation:
After inserting 50 at the end, the array becomes [1, 2, 3, 50].

---

## 🧪 Test Cases

| Input                | Value | Output               |
|---------------------|-------|----------------------|
| `[10, 20, 30]`       | `40`  | `[10, 20, 30, 40]`   |
| `[99]`               | `1`   | `[99, 1]`            |
| `[1000000]`          | `0`   | `[1000000, 0]`       |
