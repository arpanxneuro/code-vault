# Delete a Node in Single Linked List

**Difficulty**: Basic

## Problem Statement
Delete the node at a given position in a singly linked list and return the modified list. If the position is out of bounds, the list remains unchanged.

## Input
- A list of integers representing the linked list.
- An integer `pos` (0-based) indicating the node to delete.

## Output
The linked list after deletion.

## Example
Input: list = [1,2,3,4], pos = 2

Output: [1,2,4]

## Approach
If deleting head (`pos = 0`), move head to `head.next`. Otherwise, traverse to `pos-1` and set its `next` to `next.next`.

## Time Complexity
O(n)

## Space Complexity
O(1)
