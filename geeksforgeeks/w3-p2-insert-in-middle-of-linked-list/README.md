# Insert in Middle of Linked List

## 📝 Problem Statement

This exercise focuses on inserting a new node in the middle of a singly linked list. You are given a pointer to the head node of the linked list and an integer `data`. The task is to insert a new node containing `data` into the middle of the linked list.  

- If the linked list has an even number of nodes, insert the new node **after the first half**.  
- If the linked list has an odd number of nodes, insert the new node **exactly in the middle**.

---

---

## 📥 Input

- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line contains an integer `data` to insert in the middle.

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference and the integer `data`.

---

---

## 📤 Output

_Output format not specified in original README._

---

## 🔍 Examples

5
10
20
30
40
50
25

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(n)\), since we may need to traverse up to half of the list to find the middle.

**Space Complexity:** ** \(O(1)\), as insertion is done in-place without additional storage.

---

## 🔁 Original README

# Insert in Middle of Linked List

## Problem Description
This exercise focuses on inserting a new node in the middle of a singly linked list. You are given a pointer to the head node of the linked list and an integer `data`. The task is to insert a new node containing `data` into the middle of the linked list.  

- If the linked list has an even number of nodes, insert the new node **after the first half**.  
- If the linked list has an odd number of nodes, insert the new node **exactly in the middle**.

---

## Function Description
Complete the `insertInMiddle` function with the following parameters:

- **head**: a reference to the head of the linked list  
- **data**: an integer representing the value to insert

**Return Requirement:**  
Return the head of the modified linked list after insertion.

---

## Input Format
- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line contains an integer `data` to insert in the middle.

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference and the integer `data`.

---

## Constraints
- \( 0 \leq n \leq 10^5 \)  
- Node values and `data` can be any integer within the signed 32-bit range.

---

## Sample Input
5
10
20
30
40
50
25

## Sample Output
10 -> 20 -> 25 -> 30 -> 40 -> 50 -> NULL

### Explanation
The linked list has 5 nodes:  
10 -> 20 -> 30 -> 40 -> 50 -> NULL

The middle node is `30`. The new node with value `25` is inserted before `30`.  
The modified list becomes:  
10 -> 20 -> 25 -> 30 -> 40 -> 50 -> NULL

---

## Complexity Analysis
- **Time Complexity:** \(O(n)\), since we may need to traverse up to half of the list to find the middle.  
- **Space Complexity:** \(O(1)\), as insertion is done in-place without additional storage.
