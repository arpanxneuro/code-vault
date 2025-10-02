# Delete a Node in Single Linked List

## 📝 Problem Statement

This exercise focuses on deleting a specific node in a singly linked list. You are given a pointer to the head node of the linked list and an integer `key`. The task is to delete the first occurrence of the node containing `key` from the linked list.  

- If the key exists, delete the node and return the updated linked list.  
- If the key does not exist, return the linked list unchanged.

---

---

## 📥 Input

- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line contains the integer `key` representing the node to delete.

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference and the integer `key`.

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
30

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(n)\), where \(n\) is the number of nodes in the linked list.

**Space Complexity:** ** \(O(1)\), since deletion is performed in-place without extra space.

---

## 🔁 Original README

# Delete a Node in Single Linked List

## Problem Description
This exercise focuses on deleting a specific node in a singly linked list. You are given a pointer to the head node of the linked list and an integer `key`. The task is to delete the first occurrence of the node containing `key` from the linked list.  

- If the key exists, delete the node and return the updated linked list.  
- If the key does not exist, return the linked list unchanged.

---

## Function Description
Complete the `deleteNode` function with the following parameters:

- **head**: a reference to the head of the linked list  
- **key**: an integer representing the value of the node to delete

**Return Requirement:**  
Return the head reference of the updated linked list.

---

## Input Format
- The first line contains an integer `n`, the number of elements in the linked list.  
- The next `n` lines contain one element each, representing the node values.  
- The last line contains the integer `key` representing the node to delete.

**Note:**  
Do not read input from `stdin` or console. The function will receive the head reference and the integer `key`.

---

## Constraints
- \( 1 \leq n \leq 10^5 \)  
- Node values and `key` can be any integer within the signed 32-bit range.

---

## Sample Input
5
10
20
30
40
50
30

## Sample Output
10 -> 20 -> 40 -> 50 -> NULL

### Explanation
The linked list is:
10 -> 20 -> 30 -> 40 -> 50 -> NULL

The key `30` exists in the list. After deleting the node containing `30`, the updated linked list is:
10 -> 20 -> 40 -> 50 -> NULL

---

## Complexity Analysis
- **Time Complexity:** \(O(n)\), where \(n\) is the number of nodes in the linked list.  
- **Space Complexity:** \(O(1)\), since deletion is performed in-place without extra space.
