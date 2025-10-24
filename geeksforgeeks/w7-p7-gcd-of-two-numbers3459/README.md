# GCD of Two Numbers

**Difficulty:** Basic

## Problem Statement
Find the Greatest Common Divisor (GCD) of two numbers using recursion. GCD of two numbers is the largest number that divides both of them.

## Input
- Two integers A and B (1 ≤ A, B ≤ 10^9)

## Output
Return the GCD of A and B.

## Example
Input: A = 12, B = 15

Output: 3
(3 is the largest number that divides both 12 and 15)

## Approach
Use Euclidean algorithm recursively:
1. Base case: if second number is 0, first number is GCD
2. Recursive case: GCD(a,b) = GCD(b, a mod b)

## Time Complexity
O(log(min(A,B)))

## Space Complexity
O(log(min(A,B))) - recursive call stack