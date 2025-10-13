# Reverse a Doubly Linked List

**Difficulty:** Basic

## Problem Statement
Reverse a doubly linked list in-place and return the new head.

## Input
- A doubly linked list represented by its head.

## Output
The head of the reversed doubly linked list.

## Example
Input: 1 <-> 2 <-> 3

Output: 3 <-> 2 <-> 1

## Approach
Traverse the list and swap each node's `prev` and `next` pointers. After processing all nodes, the original tail becomes the new head.

## Time Complexity
O(n)

## Space Complexity
O(1)
