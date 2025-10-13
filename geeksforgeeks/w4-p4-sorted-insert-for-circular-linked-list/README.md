# Sorted Insert for Circular Linked List

**Difficulty:** Medium

## Problem Statement
Given a circular (singly) linked list sorted in ascending order, insert a new node with a given value so that the list remains sorted and circular.

## Input
- A reference to any node in a sorted circular singly linked list.
- An integer `val` to insert.

## Output
The circular linked list after insertion (return a reference to any node in the list or the new node as per convention).

## Example
Input: circular list = 1 -> 3 -> 4 -> (back to 1), val = 2

Output: 1 -> 2 -> 3 -> 4 -> (back to 1)

## Approach
If the list is empty, create a single-node circular list. Otherwise traverse to find the insertion point where `current.val <= val <= next.val`, or handle wrap-around insertion (val smallest or largest). Insert by adjusting `next` pointers.

## Time Complexity
O(n)

## Space Complexity
O(1)
