# Problem: Greatest Common Divisor of Strings

**Pattern:** Strings + Mathematics (GCD)

**Difficulty:** Easy

**Time Complexity:** O(n + m)

**Space Complexity:** O(1)

---

## Key Idea

- First, verify whether both strings are formed by repeating the same base pattern.
- This is done by checking:

```cpp
str1 + str2 == str2 + str1
```

- If the concatenated strings are different, no common divisor string exists.

- Otherwise:
  - Compute the GCD of the lengths of both strings.
  - The answer is the prefix of `str1` whose length is equal to the GCD.

```cpp
return str1.substr(0, gcd(n1, n2));
```

---

## What I Learned

- Mathematical concepts like GCD can simplify string problems.
- String concatenation can be used to verify repeating patterns.
- Sometimes the optimal solution combines multiple concepts instead of relying on a single algorithm.
