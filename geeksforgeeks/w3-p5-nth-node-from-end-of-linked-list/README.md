# Nth Node from End of Linked List

**Difficulty**: Basic

## Problem Statement
Return the value of the nth node from the end of a singly linked list (1-based `n`). If `n` is larger than the list length, return an appropriate sentinel or error.

## Input
- A list of integers representing the linked list.
- An integer `n` (1-based) indicating which node from the end to return.

## Output
The integer value of the nth node from the end, or an indication that `n` is out of bounds.

## Example
Input: list = [10,20,30,40,50], n = 2

Output: 40

## Approach
Use two pointers: advance the first pointer `n` steps, then move both pointers until the first hits the end. The second pointer then points to the n-th from end.

## Time Complexity
O(n)

## Space Complexity
O(1)
