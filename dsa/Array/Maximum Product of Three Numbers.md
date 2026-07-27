# 628. Maximum Product of Three Numbers

## Problem

Given an integer array `nums`, return the **maximum product** that can be obtained by multiplying any three numbers.

### Example

**Input:**

```text
nums = [-10, -10, 5, 2]
```

**Output:**

```text
500
```

**Explanation:**

- Product of the three largest numbers:
  ```
  5 × 2 × (-10) = -100
  ```

- Product of the two smallest (most negative) numbers and the largest number:
  ```
  (-10) × (-10) × 5 = 500
  ```

The maximum product is **500**.

---

## Approach

1. Sort the array in ascending order.
2. There are **two possible ways** to get the maximum product:
   - Multiply the **three largest numbers**.
   - Multiply the **two smallest (most negative) numbers** with the **largest positive number**.
3. Return the maximum of these two products.

---

## Intuition

After sorting the array:

- The last three elements are the largest numbers.
- The first two elements are the smallest numbers (possibly negative).

Since:

```
Negative × Negative = Positive
```

Sometimes two very small negative numbers produce a much larger positive product than using the third-largest positive number.

Example:

```text
nums = [-10, -10, 2, 5]

Sorted:

[-10, -10, 2, 5]

Option 1:

5 × 2 × (-10) = -100

Option 2:

(-10) × (-10) × 5 = 500

Answer = 500
```

---

## Code (C++)

```cpp
class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int option1 = nums[n-1] * nums[n-2] * nums[n-3];

        int option2 = nums[0] * nums[1] * nums[n-1];

        return max(option1, option2);
    }
};
```

---

## Complexity

- **Time Complexity:** `O(n log n)`
  - Sorting the array dominates the runtime.

- **Space Complexity:** `O(1)`
  - Sorting is performed in-place (ignoring the sorting algorithm's internal stack).

---

## What I Learned

- Sorting makes it easier to compare different possible answers.
- The maximum product does **not always** come from the three largest numbers.
- Two negative numbers can produce a positive product.
- Always think about special cases involving negative numbers.

---

## Optimization Note

Current Approach:

- Sort the array.
- Compare two possible products.

Time Complexity:

```
O(n log n)
```

Possible Optimization:

Traverse the array once while maintaining:

- Largest number
- Second largest
- Third largest
- Smallest number
- Second smallest

Then compute the same two products.

Optimized Complexity:

- **Time:** `O(n)`
- **Space:** `O(1)`

I'll revisit this problem after learning more about optimization techniques.

---

## Tags

```text
Array
Sorting
Math
Greedy
Easy
```

---

## Reflection

This problem taught me an important lesson:

**The "largest numbers" don't always produce the maximum product.**

When negative numbers are involved, considering the two smallest elements is equally important. This reinforced the habit of checking edge cases instead of relying only on intuition.
