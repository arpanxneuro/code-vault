# Detect Loop in Linked List

## 📝 Problem Statement

This exercise focuses on detecting a loop in a linked list. You are given a pointer to the head node of a linked list. The task is to determine whether the linked list contains a cycle (loop).  

- If the linked list contains a loop, return `true` (or `1` in C).  
- Otherwise, return `false` (or `0` in C).

---

---

## 📥 Input

- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line may indicate the position at which the tail connects to a previous node to form a loop (if any).

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference.

---

---

## 📤 Output

_Output format not specified in original README._

---

## 🔍 Examples

3
1
2
3
1

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(n)\), where \(n\) is the number of nodes in the linked list.

**Space Complexity:** ** \(O(1)\) using Floyd’s Cycle Detection Algorithm (Tortoise and Hare).

---

## 🔁 Original README

# Detect Loop in Linked List

## Problem Description
This exercise focuses on detecting a loop in a linked list. You are given a pointer to the head node of a linked list. The task is to determine whether the linked list contains a cycle (loop).  

- If the linked list contains a loop, return `true` (or `1` in C).  
- Otherwise, return `false` (or `0` in C).

---

## Function Description
Complete the `hasCycle` function with the following parameter:

- **head**: a reference to the head of the list

**Return Requirement:**  
Return a boolean (`true`/`false`) or integer (`1`/`0`) indicating the presence of a loop.

---

## Input Format
- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line may indicate the position at which the tail connects to a previous node to form a loop (if any).

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference.

---

## Constraints
- \( 1 \leq n \leq 10^5 \)  
- Node values can be any integer within the signed 32-bit range.  
- The loop position, if present, will be a valid node index within the list.

---

## Sample Input
3
1
2
3
1
## Sample Output
true

### Explanation
The linked list is:
1 -> 2 -> 3
Node `3` points back to node `2`, forming a cycle. Hence, the function returns `true`.

---

## Complexity Analysis
- **Time Complexity:** \(O(n)\), where \(n\) is the number of nodes in the linked list.  
- **Space Complexity:** \(O(1)\) using Floyd’s Cycle Detection Algorithm (Tortoise and Hare).
