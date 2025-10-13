# Linked List Insertion

**Difficulty**: Basic

## Problem Statement
Insert a new node with a given value at a specified position in a singly linked list. If the position is 0, the node becomes the new head.

## Input
- A list of integers representing the linked list.
- An integer `pos` (0-based) where the new node should be inserted.
- An integer `val` the value to insert.

## Output
The linked list after insertion, represented as a sequence of node values.

## Example
Input: list = [1, 2, 3], pos = 1, val = 9

Output: [1, 9, 2, 3]

## Approach
Traverse the list to the node at index `pos-1` and update pointers to insert the new node. Handle insertion at head (`pos = 0`) by creating the new node and making it the head.

## Time Complexity
O(n)

## Space Complexity
O(1)
