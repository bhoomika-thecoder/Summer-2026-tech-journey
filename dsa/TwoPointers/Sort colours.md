# Problem: Sort Colors

##  Approach: Dutch National Flag Algorithm (Three Pointers)

### Idea
Instead of sorting the array using a sorting algorithm, we divide the array into three regions using three pointers.

- `i` → position where the next `0` should go.
- `j` → current element being processed.
- `k` → position where the next `2` should go.

At any point:

[0 ... i-1] → All 0s

[i ... j-1] → All 1s

[j ... k] → Unsorted

[k+1 ... n-1] → All 2s

---

### Algorithm

While `j <= k`:

- If `nums[j] == 0`
  - Swap with `nums[i]`
  - Increment both `i` and `j`

- If `nums[j] == 1`
  - It is already in the correct region.
  - Just increment `j`

- If `nums[j] == 2`
  - Swap with `nums[k]`
  - Decrement `k`
  - Don't increment `j` because the swapped element hasn't been checked yet.

---

### Time Complexity

O(n)

Each element is processed at most once.

### Space Complexity

O(1)

Sorting is done in-place using only three pointers.

---

### What I Learned

- Learned the Dutch National Flag Algorithm.
- Understood how three pointers can partition an array in one traversal.
- Learned why we don't increment `j` after swapping with `k`.
- Practiced in-place array manipulation.
- Improved understanding of pointer movement and swap operations.
