# Detect Loop in Linked List

**Difficulty**: Basic

## Problem Statement
Detect whether a singly linked list contains a cycle (loop). Return `true` if a loop exists, otherwise `false`.

## Input
- A linked list that may contain a cycle formed by pointing a node.next to an earlier node.

## Output
Boolean indicating presence of a cycle.

## Example
Given list: 1 -> 2 -> 3 -> 4 -> 2 (cycle back to node with value 2)

Output: true

## Approach
Use Floyd's Tortoise and Hare algorithm: advance one pointer by 1 and the other by 2; if they meet, a cycle exists. Otherwise, reaching `null` means no cycle.

## Time Complexity
O(n)

## Space Complexity
O(1)
