# Insert in Sorted Way in a Sorted Doubly Linked List

**Difficulty**: Basic

## Problem Statement
Given the head of a sorted doubly linked list and a value `x`, insert a new node into the list while preserving sorted order.

## Input
- A sorted doubly linked list (ascending order).
- An integer `val` to insert.

## Output
The head of the doubly linked list after insertion.

## Example
Input: list = 1 <-> 3 <-> 4, val = 2

Output: 1 <-> 2 <-> 3 <-> 4

## Approach
Handle insertion at head and tail as special cases. Otherwise traverse until finding the first node with `value >= val` and insert before it, fixing both `prev` and `next` pointers.

## Time Complexity
O(n)

## Space Complexity
O(1)
