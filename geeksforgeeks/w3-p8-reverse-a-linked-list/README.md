# Reverse a Linked List

**Difficulty**: Basic

## Problem Statement
Reverse a singly linked list and return the new head.

## Input
- A singly linked list represented by its head.

## Output
The head of the reversed linked list.

## Example
Input: [1,2,3,4]

Output: [4,3,2,1]

## Approach
Iteratively reverse the `next` pointers by keeping track of previous, current and next nodes. A recursive solution is also possible.

## Time Complexity
O(n)

## Space Complexity
O(1) iterative, O(n) recursive stack
