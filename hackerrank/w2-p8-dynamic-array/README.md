# Dynamic Array

> **Difficulty**: Basic  
> **Accuracy**:   
> **Submissions**:   
> **Points**: 

---

## 📝 Problem Statement

This exercise focuses on the implementation of a dynamic array query system. You are given two integers, `n` (the number of sequences) and `q` (the number of queries). An initially empty sequence list is maintained, where each query updates or retrieves values based on certain rules.

---

---

## 📥 Input

- The first line contains two integers, `n` (number of sequences) and `q` (number of queries).  
- Each of the next `q` lines contains one query, either type `1` or type `2`.

---

---

---

## 📤 Output

For each query of type `2`, print the value of `lastAnswer` on a new line.

---

---

---

## ✅ Examples

2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1

shell
Copy code

---

---

## 🧪 Test Cases

| Input | Value | Output |
|---|---|---|
| `5
1 2 3 4 5` | `90` | `1 2 3 4 5 90` |

**Time Complexity:** O(n)

**Space Complexity:** O(1)
