# Palindrome String (Recursive)

**Difficulty:** Basic

## Problem Statement
Check if a given string is palindrome using recursion. A string is said to be palindrome if it reads the same backwards as forwards.

## Input
- A string S containing lowercase letters (1 ≤ |S| ≤ 10^4)

## Output
Return 1 if S is palindrome, else return 0.

## Example
Input: S = "radar"

Output: 1
(String "radar" is palindrome)

Input: S = "help"

Output: 0
(String "help" is not palindrome)

## Approach
1. Base cases: 
   - Empty string or single character is palindrome
   - If first and last characters don't match, not palindrome
2. Recursive case: if first and last characters match, check if substring (excluding first and last chars) is palindrome

## Time Complexity
O(N/2) where N is string length

## Space Complexity
O(N/2) - recursive call stack