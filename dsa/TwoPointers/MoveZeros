# Problem: Move Zeroes

**Pattern:** Two Pointers

**Difficulty:** Easy

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Key Idea

- Maintain two pointers:
  - `left` → points to the position where the next non-zero element should be placed.
  - `right` → traverses the entire array.

- Traverse the array using `right`.
- If `nums[right]` is non-zero:
  - Swap `nums[left]` and `nums[right]`.
  - Increment `left`.
- Ignore zeroes while traversing.
- By the end of the traversal, all non-zero elements are shifted to the front while maintaining their original order, and zeroes naturally move to the end.

---

## What I Learned

- Two pointers can be used for in-place array modification.
- Swapping elements avoids using any extra array.
- Maintaining the relative order of non-zero elements is possible with a single traversal.
- This problem strengthened my understanding of efficient in-place algorithms.
