# LeetCode 3014 - Minimum Number of Pushes to Type Word I
---
## Problem Summary

Given a string consisting of lowercase English letters, we need to remap the letters onto a traditional mobile keypad (keys 2–9) such that the total number of key presses required to type the word is minimum.

Each key can contain any number of letters, but:

- Every letter must be assigned to exactly one key.
- The first letter on a key requires 1 press, the second requires 2 presses, and so on.

The goal is to minimize the total number of key presses.

## Approach

Since every character contributes to the total cost based on how frequently it appears, the optimal strategy is:

1. Count the frequency of each character.
2. Sort the frequencies in descending order.
3. Assign the most frequent characters to positions requiring the fewest key presses.
4. Since there are 8 available keys (2–9):
     - First 8 characters → 1 press
     - Next 8 characters → 2 presses
     - Next 8 characters → 3 presses
     - Remaining characters → 4 presses
5. Multiply each character's frequency by its assigned press count and accumulate the result.

## Algorithm

1. Create a frequency array of size 26.
2. Count occurrences of every character.
3. Sort frequencies in descending order.
4. Traverse the sorted array.
5. Compute the required press count using:
        press = (i / 8) + 1;
6. Add:
        result += frequency * press;
7. Return the final answer.

## Complexity Analysis
Time Complexity: O(n + 26 log 26) ≈ O(n)
Space Complexity: O(26) ≈ O(1)

## What I Learned: 
- Greedy solutions often involve assigning the highest-value elements to the lowest-cost positions.
- Frequency sorting is a powerful technique for optimization problems.
- Since the alphabet size is fixed (26), sorting frequencies is effectively a constant-time operation.
- Mapping the press count using press = (i / 8) + 1 makes the implementation concise and elegant.
