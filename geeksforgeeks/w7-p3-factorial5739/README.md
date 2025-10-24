# Factorial

**Difficulty:** Basic

## Problem Statement
Calculate the factorial of a number N using recursion. Factorial of N (written as N!) is the product of all positive integers less than or equal to N.

## Input
- A single integer N (0 ≤ N ≤ 18)

## Output
Return N! (factorial of N)

## Example
Input: N = 5

Output: 120
(5! = 5 × 4 × 3 × 2 × 1 = 120)

## Approach
1. Base cases: if N = 0 or 1, return 1
2. Recursive case: return N * factorial(N-1)
3. The function multiplies N with factorial of (N-1) until reaching base case

## Time Complexity
O(N)

## Space Complexity
O(N) - recursive call stack