# 3536. Maximum Product of Two Digits

## Problem

Given a positive integer `n`, return the maximum product of any two digits in `n`.

### Example

Input:

31

Output:

3

Explanation:

The digits are 3 and 1.

3 × 1 = 3.

---

## Approach

1. Extract every digit from the number using the modulo (`%`) operator.
2. Store all digits in a vector.
3. Sort the vector in ascending order.
4. The last two elements are the largest digits.
5. Return their product.

---

## Intuition

To maximize the product, we need the two largest digits.

Since sorting arranges the digits in increasing order, the last two digits in the vector are the largest.

Example:

n = 58392

Digits extracted:

[5, 8, 3, 9, 2]

After sorting:

[2, 3, 5, 8, 9]

Largest digits:

9 and 8

Answer:

9 × 8 = 72

---

## Code (C++)

```cpp
class Solution {
public:
    int maxProduct(int n) {

        vector<int> ans;

        while(n){
            int rem = n % 10;
            ans.push_back(rem);
            n /= 10;
        }

        sort(ans.begin(), ans.end());

        int size = ans.size();

        return ans[size-1] * ans[size-2];
    }
};
```

---

## Complexity

- Time Complexity: **O(d log d)**

  where **d** is the number of digits.

- Space Complexity: **O(d)**

---

## What I Learned

- Extracting digits using `% 10` and `/ 10`.
- Using a vector to store digits.
- Sorting a vector using `sort()`.
- Finding the largest two elements after sorting.
- Applying STL to simplify the solution.

---

## Tags

```
Math
Sorting
STL
Digits
Easy
```

---

## Reflection

This problem helped me revise:

- Modulo operator (`%`)
- Integer division
- Vectors
- Sorting using STL

Although this solution uses sorting, it can also be optimized by finding the largest and second-largest digits in a single pass without extra space.
