# Remove Loop in Linked List

**Difficulty:** Intermediate

## Problem Statement
Given a linked list that contains a loop, remove the loop so that the list becomes linear. Preserve node order outside the loop.

## Input
- A linked list that contains a cycle.

## Output
The linked list after the cycle has been removed.

## Example
Input: 1 -> 2 -> 3 -> 4 -> 2 (cycle)

Output: 1 -> 2 -> 3 -> 4 -> null

## Approach
Detect the loop using Floyd's algorithm. Once meeting point found, reset one pointer to head and move both by one until they meet at the loop start. Then set the node just before the loop start `next` to `null`.

## Time Complexity
O(n)

## Space Complexity
O(1)
