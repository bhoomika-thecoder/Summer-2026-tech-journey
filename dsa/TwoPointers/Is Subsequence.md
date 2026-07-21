# Problem: Is Subsequence

**Pattern:** Two Pointers

**Difficulty:** Easy

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Key Idea

- Use two pointers:
  - `i` traverses string `s`.
  - `j` traverses string `t`.

- Compare characters:
  - If `s[i] == t[j]`, move both pointers.
  - Otherwise, only move `j`.

- If `i` reaches the end of `s`, then every character of `s` has been found in order inside `t`, so `s` is a subsequence.

---

## What I Learned

- Two pointers are useful for comparing two sequences efficiently.
- Matching characters while preserving order is the key idea behind subsequence problems.
- Traversing each string only once gives an efficient linear-time solution.
