# LeetCode 3345: Smallest Divisible Digit Product I

## Problem

Given two integers n and t, find the smallest number greater than or equal to n such that the product of its digits is divisible by t.
----

## My Approach

I used a Brute Force approach.

Starting from n, I repeatedly checked each number until I found one whose digit product was divisible by t.

### Steps
1. Start with the given number n.
2. Calculate the product of all its digits.
3. Check if:
    product % t == 0
4. If true, return the current number.
5. Otherwise, increment n and repeat the process.

### Example
- Input
  n = 15
  t = 3
- Iteration
  15
  Digit Product = 1 × 5 = 5
  5 % 3 ≠ 0 // wrong

  16
  Digit Product = 1 × 6 = 6
  6 % 3 = 0 // correct

- Output
  16

## Algorithm
1. Initialize the current number as n.
2. Extract each digit using % 10.
3. Multiply the digits together.
4. Check divisibility with t.
5. If divisible, return the number.
6. Otherwise, increment n and repeat.

## Time Complexity : O(k × d)
Where:

k = number of integers checked before finding the answer.
d = number of digits in each number.

## Space Complexity
O(1)

Only a few variables are used.

### What I Learned
How to extract digits of a number using % 10 and / 10.
How to calculate the product of digits.
Sometimes the simplest brute-force solution is the most practical when constraints are small.
Always analyze the constraints before trying to optimize.
