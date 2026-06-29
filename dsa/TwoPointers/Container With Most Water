# Problem: Container With Most Water

**Pattern:** Two Pointers

**Difficulty:** Medium

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Key Idea

- Use two pointers:
  - `left` starts from the beginning.
  - `right` starts from the end.

- Calculate the area formed by the two lines:
  - Width = `right - left`
  - Height = `min(height[left], height[right])`
  - Area = Width × Height

- Store the maximum area obtained.

- Move the pointer with the smaller height because:
  - The current area is limited by the shorter line.
  - Moving the taller line cannot increase the height limit.
  - Only moving the shorter line gives a chance to find a taller boundary and increase the area.

---

## What I Learned

- Two pointers can optimize problems that would otherwise require checking every pair.
- Understanding *why* we move the shorter pointer is more important than memorizing the algorithm.
- This approach reduces the time complexity from **O(n²)** to **O(n)**.
