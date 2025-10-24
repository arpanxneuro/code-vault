# Power of Numbers

**Difficulty:** Medium

## Problem Statement
Given a number N and a power P, calculate N raised to power P using recursion. As answers can be very large, calculate the result modulo 10^9 + 7.

## Input
- Two integers N and P (1 ≤ N ≤ 10^6, 0 ≤ P ≤ 10^6)

## Output
Return (N^P) % (10^9 + 7)

## Example
Input: N = 2, P = 3

Output: 8
(2^3 = 8)

## Approach
Use recursive binary exponentiation:
1. Base case: if power is 0, return 1
2. If power is even: result = (N^(P/2))^2
3. If power is odd: result = N * (N^(P-1))
4. Apply modulo at each step to prevent overflow

## Time Complexity
O(log P)

## Space Complexity
O(log P) - recursive call stack