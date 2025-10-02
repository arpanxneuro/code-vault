# Dynamic Array

## 📝 Problem Statement

This exercise focuses on the implementation of a dynamic array query system. You are given two integers, `n` (the number of sequences) and `q` (the number of queries). An initially empty sequence list is maintained, where each query updates or retrieves values based on certain rules.

---

## 📥 Input

- The first line contains two integers, `n` (number of sequences) and `q` (number of queries).  
- Each of the next `q` lines contains one query, either type `1` or type `2`.

---

---

## 📤 Output

For each query of type `2`, print the value of `lastAnswer` on a new line.

---

---

## 🔍 Examples

2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1

shell
Copy code

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(q)\), where \(q\) is the number of queries.

**Space Complexity:** ** \(O(n + q)\), due to the dynamic growth of sequences.

---

## 🔁 Original README

# Dynamic Array

## Problem Description
This exercise focuses on the implementation of a dynamic array query system. You are given two integers, `n` (the number of sequences) and `q` (the number of queries). An initially empty sequence list is maintained, where each query updates or retrieves values based on certain rules.

### Functionality
You must perform the following operations using the given queries:

1. **Query Type 1:**  
   `1 x y` → Append integer `y` to the sequence `(x ⊕ lastAnswer) % n`.

2. **Query Type 2:**  
   `2 x y` → Find the sequence `(x ⊕ lastAnswer) % n`, then find the element at index `y % size` within that sequence. Assign this value to `lastAnswer` and print it.

---

## Input Format
- The first line contains two integers, `n` (number of sequences) and `q` (number of queries).  
- Each of the next `q` lines contains one query, either type `1` or type `2`.

---

## Constraints
- \(1 \leq n, q \leq 10^5\)  
- \(0 \leq x, y \leq 10^9\)  
- It is guaranteed that query type 2 will only be issued when the sequence is non-empty.

---

## Output Format
For each query of type `2`, print the value of `lastAnswer` on a new line.

---

## Sample Input
2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1

shell
Copy code

## Sample Output
7
3

yaml
Copy code

### Explanation
- Create 2 sequences: `seq[0] = []`, `seq[1] = []`  
- Query 1: Append 5 to `seq[(0 ⊕ 0) % 2] → seq[0] = [5]`  
- Query 2: Append 7 to `seq[(1 ⊕ 0) % 2] → seq[1] = [7]`  
- Query 3: Append 3 to `seq[(0 ⊕ 0) % 2] → seq[0] = [5, 3]`  
- Query 4: `seq[(1 ⊕ 0) % 2] = seq[1] → element = seq[1][0] = 7`, so `lastAnswer = 7`  
- Query 5: `seq[(1 ⊕ 7) % 2] = seq[0] → element = seq[0][1] = 3`, so `lastAnswer = 3`

---

## Complexity Analysis
- **Time Complexity:** \(O(q)\), where \(q\) is the number of queries.  
- **Space Complexity:** \(O(n + q)\), due to the dynamic growth of sequences.
