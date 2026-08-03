# 1089. Duplicate Zeros

## Approach: Array Modification using Insert & Pop

### Idea

The goal is to duplicate every occurrence of `0` while keeping the array's original size.

Whenever a `0` is encountered:

- Insert another `0` immediately after it.
- Remove the last element using `pop_back()` to maintain the original array length.
- Increment the index to skip over the newly inserted zero and avoid processing it again.

---

## Algorithm

1. Traverse the array from left to right.
2. If the current element is `0`:
   - Insert another `0` at the next position.
   - Remove the last element using `pop_back()`.
   - Move the index forward by one extra position.
3. Continue until the end of the array.

---

## Time Complexity

**O(n²)**

- `insert()` shifts elements to the right, taking **O(n)** time.
- In the worst case, this happens for multiple zeros.

---

## Space Complexity

**O(1)**

- The modification is performed directly on the original array.
- No additional data structures are used.

---

## What I Learned

- Learned how `vector::insert()` works and how it shifts elements.
- Practiced modifying an array while maintaining a fixed size.
- Understood why the index must be incremented after duplicating a zero.
- Learned how `pop_back()` helps preserve the original array length.
- Realized that although this approach is simple and intuitive, it is not the most optimal due to repeated shifting of elements.

---


This problem taught me how in-place array modifications work using STL operations. While this solution is easy to understand and implement, an optimized two-pointer solution can solve the problem in **O(n)** time by avoiding repeated insertions.
