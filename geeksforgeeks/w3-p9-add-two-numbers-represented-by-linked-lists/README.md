# Add Two Numbers Represented by Linked Lists

**Difficulty**: Medium

## Problem Statement
Two non-empty linked lists represent two non-negative integers in reverse digit order (each node contains a single digit). Add the two numbers and return the sum as a linked list in the same reversed order.

## Input
- Two linked lists, each node containing a digit (0-9), least significant digit first.

## Output
A linked list representing the sum of the two numbers, in reversed digit order.

## Example
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

Output: 7 -> 0 -> 8  (342 + 465 = 807)

## Approach
Traverse both lists simultaneously, add corresponding digits with carry, create new nodes for the result. Continue until both lists and carry are exhausted.

## Time Complexity
O(max(n, m))

## Space Complexity
O(max(n, m)) for the result list
