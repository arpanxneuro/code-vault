# Delete Node in Doubly Linked List

**Difficulty:** Basic

## Problem Statement
Delete a node with a given value (or at a given position) from a doubly linked list and return the updated head.

## Input
- A doubly linked list and either a value to delete or a 0-based position index.

## Output
The doubly linked list after deletion.

## Example
Input: list = 1 <-> 2 <-> 3, delete value = 2

Output: 1 <-> 3

## Approach
Search for the node to remove. Update its `prev.next` and `next.prev` pointers appropriately. If deleting head or tail, update head or tail references.

## Time Complexity
O(n)

## Space Complexity
O(1)
