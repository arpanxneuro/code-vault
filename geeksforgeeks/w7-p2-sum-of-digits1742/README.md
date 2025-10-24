# Sum of Digits

**Difficulty:** Basic

## Problem Statement
Given a number N, calculate the sum of its digits using recursion. The task is to complete the recursive function `sumOfDigits` that takes a number N as input and returns the sum of all digits in N.

## Input
- A single integer N (1 ≤ N ≤ 10^9)

## Output
Return a single integer - the sum of all digits in N.

## Example
Input: N = 1234

Output: 10
(1 + 2 + 3 + 4 = 10)

## Approach
1. Get the last digit using modulo operator (N % 10)
2. Add it to the recursive sum of remaining digits (N / 10)
3. Base case: when N becomes 0, return 0

## Time Complexity
O(log N) - number of digits in N

## Space Complexity
O(log N) - recursive call stack depth equals number of digits