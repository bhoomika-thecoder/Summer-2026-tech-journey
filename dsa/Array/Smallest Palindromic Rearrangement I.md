# 3517. Smallest Palindromic Rearrangement I

## Problem Statement

Given a palindromic string `s`, rearrange its characters to obtain the **lexicographically smallest palindrome**.

---

## Intuition

Since the given string is already a palindrome, we don't need to worry about character frequencies.

The key observation is:

- The second half of a palindrome is always the mirror image of the first half.
- Therefore, we only need to make the **first half** as small as possible.
- Once the first half is sorted, we simply copy it to the second half in reverse positions.

---
## Complexity

Time Complexity: O(n log n)

Sorting the first half takes O((n/2) log(n/2)), which simplifies to O(n log n).

Space Complexity: O(1)

Sorting is performed in place (ignoring the internal stack used by the sorting algorithm).

##  Approach

1. Find the length of the string.

```cpp
int n = s.length();

2. Compute the middle index.

```cpp 
int mid = n / 2;

3. Sort only the first half of the string.

```cpp
sort(begin(s), begin(s) + mid);

4. Mirror the first half onto the second half.

```cpp
for(int i = 0; i < mid; i++)
{
    s[n - 1 - i] = s[i];
}

5. Return the modified string.
---

### Why does s[n-1-i] = s[i] work?

A palindrome is symmetric.

For every character in the first half, there must be an identical character at the corresponding position from the end.

Example:

n = 6

i = 0

s[n-1-i]
= s[6-1-0]
= s[5]

Therefore,

s[5] = s[0]

Similarly,

s[4] = s[1]
s[3] = s[2]

This automatically constructs the second half of the palindrome.

### Key Learning
- Lexicographical order means making earlier characters as small as possible.
- In a palindrome, the second half is completely determined by the first half.
- Instead of sorting the entire string, sorting only the first half is sufficient.
- The expression s[n-1-i] = s[i] is a simple yet powerful way to mirror characters and rebuild the palindrome efficiently.
