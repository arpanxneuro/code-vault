# Insert in Middle of Linked List

**Difficulty**: Basic

## Problem Statement
Given the head of a singly linked list, insert a new node with a given value in the middle of the list. For an even-length list, insert after n/2 nodes (i.e., at index n/2).

## Input
- A list of integers representing the linked list.
- An integer `val` to insert in the middle.

## Output
The linked list after inserting the new value in the middle.

## Example
Input: list = [1,2,3,4], val = 9

Output: [1,2,9,3,4]

## Approach
Use the slow/fast pointer technique to locate the middle (slow will point to the insertion point) and insert the new node after slow.

## Time Complexity
O(n)

## Space Complexity
O(1)
