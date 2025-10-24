# Print N to 1 Without Loop

**Difficulty:** Basic

## Problem Statement
Print numbers from N to 1 using recursion (without using any loops). The numbers should be printed in reverse order, starting from N down to 1.

## Input
- An integer N (1 ≤ N ≤ 10^4)

## Output
Print numbers from N to 1 in decreasing order, one number per line.

## Example
Input: N = 5

Output:
```
5
4
3
2
1
```

## Approach
Use recursive function calls to print the current number and then make a recursive call with N-1 until reaching 1. Base case is when N becomes 0.

## Time Complexity
O(N)

## Space Complexity
O(N) - due to recursive call stack