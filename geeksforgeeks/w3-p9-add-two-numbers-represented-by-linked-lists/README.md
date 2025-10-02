# Add Two Numbers Represented by Linked Lists

## 📝 Problem Statement

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

The function should return the head of the new linked list representing the sum.

---

---

## 📥 Input

- The first line contains an integer `n`, the number of nodes in the first linked list.  
- The next `n` lines contain one integer each, representing the digits of the first number.  
- The next line contains an integer `m`, the number of nodes in the second linked list.  
- The next `m` lines contain one integer each, representing the digits of the second number.  

---

---

## 📤 Output

Return the head of the linked list representing the sum of the two input numbers.  
Each node’s value should be printed on a new line during testing.

---

---

## 🔍 Examples

3
2
4
3
3
5
6
4

---

## 💡 Approach

_Approach not described in original README._

**Time Complexity:** ** \(O(\max(n, m))\), where \(n\) and \(m\) are the lengths of the two linked lists.

**Space Complexity:** ** \(O(\max(n, m))\), for storing the resulting linked list.

---

## 🔁 Original README

# Add Two Numbers Represented by Linked Lists

## Problem Description
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

The function should return the head of the new linked list representing the sum.

---

## Function Description
Complete the `addTwoNumbers` function with the following parameters:

- **l1**: a pointer/reference to the head of the first linked list.  
- **l2**: a pointer/reference to the head of the second linked list.  

**Return:**  
The head node of the resulting linked list.

---

## Input Format
- The first line contains an integer `n`, the number of nodes in the first linked list.  
- The next `n` lines contain one integer each, representing the digits of the first number.  
- The next line contains an integer `m`, the number of nodes in the second linked list.  
- The next `m` lines contain one integer each, representing the digits of the second number.  

---

## Constraints
- The number of nodes in each linked list is in the range \([1, 100]\).  
- Each node value is in the range \([0, 9]\).  
- It is guaranteed that the two numbers do not contain leading zeros, except the number `0` itself.

---

## Output Format
Return the head of the linked list representing the sum of the two input numbers.  
Each node’s value should be printed on a new line during testing.

---

## Sample Input
3
2
4
3
3
5
6
4

## Sample Output
7
0
8


### Explanation
The first linked list represents the number **342** (since digits are stored in reverse order).  
The second linked list represents the number **465**.  

Adding the two:  
342 + 465 = 807


So the resulting linked list should represent **807**, which in reverse order is:  
7 -> 0 -> 8 -> NULL

---

## Complexity Analysis
- **Time Complexity:** \(O(\max(n, m))\), where \(n\) and \(m\) are the lengths of the two linked lists.  
- **Space Complexity:** \(O(\max(n, m))\), for storing the resulting linked list.
