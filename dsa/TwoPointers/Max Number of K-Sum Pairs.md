# Problem: Max Number of K-Sum Pairs

**Pattern:** Two Pointers

**Difficulty:** medium

**Time Complexity:** O(n log n)

**Space Complexity:** O(1)

---

## Key Idea

- Sorted the array in ascending order.
- Applied the Two Pointers technique:
- One pointer starts from the beginning.
- Another pointer starts from the end.
- Compared the sum of both elements:
- If the sum equals k, counted the pair and moved both pointers.
- If the sum is less than k, moved the left pointer forward.
- If the sum is greater than k, moved the right pointer backward.
- Returned the total number of valid operations.
---

## What I Learned
-Sorting the array makes it possible to efficiently find valid pairs using two pointers instead of checking every possible pair. 
-This reduces the search from O(n²) to O(n log n).
