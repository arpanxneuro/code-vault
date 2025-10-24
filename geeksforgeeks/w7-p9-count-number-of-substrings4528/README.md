# Count Number of Substrings

**Difficulty:** Medium

## Problem Statement
Given a string of lowercase alphabets and a number K, find the count of all substrings (not necessarily distinct) having exactly K distinct characters.

## Input
- A string S consisting of lowercase alphabets
- An integer K (1 ≤ K ≤ 26)
- 1 ≤ |S| ≤ 10^4

## Output
Return the count of substrings having exactly K distinct characters.

## Example
Input: S = "aba", K = 2

Output: 3
Explanation: Substrings having exactly 2 distinct chars are:
"ab", "ba", "aba"

## Approach
1. Use two pointers technique with sliding window
2. Maintain frequency count of characters in current window
3. Use recursion to find valid substrings ending at each position
4. Count distinct characters in each window using hash map/array

## Time Complexity
O(N^2) where N is string length

## Space Complexity
O(26) = O(1) for character frequency array + O(N) recursive stack