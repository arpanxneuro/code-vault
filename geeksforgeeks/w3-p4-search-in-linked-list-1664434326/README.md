# Search in Linked List

**Difficulty**: Basic

## Problem Statement
Given a singly linked list and a value `x`, determine whether `x` exists in the list and return its first index (0-based). If not present, return -1.

## Input
- A list of integers representing the linked list.
- An integer `x` to search for.

## Output
Index of the first occurrence of `x`, or -1 if `x` is not in the list.

## Example
Input: list = [3,1,4,2], x = 4

Output: 2

## Approach
Traverse the list while maintaining a current index; return the index upon matching the value. If traversal ends, return -1.

## Time Complexity
O(n)

## Space Complexity
O(1)
