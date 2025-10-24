# Fibonacci Series Up to Nth Term

**Difficulty:** Basic

## Problem Statement
Generate the Fibonacci series up to the Nth term using recursion. The Fibonacci series is formed by adding the previous two terms to get the next term, starting with 0 and 1.

## Input
- An integer N (1 ≤ N ≤ 50)

## Output
Print N terms of the Fibonacci series space-separated.

## Example
Input: N = 5

Output: 0 1 1 2 3
(First 5 terms of Fibonacci series)

## Approach
1. Base case: First two terms are 0 and 1
2. For each subsequent term: F(n) = F(n-1) + F(n-2)
3. Use recursion to calculate each term
4. Print terms as they are calculated

## Time Complexity
O(2^N) - without memoization
O(N) - with memoization

## Space Complexity
O(N) - recursive call stack