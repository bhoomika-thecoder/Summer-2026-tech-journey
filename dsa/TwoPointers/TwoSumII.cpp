/*
Problem: Two Sum II - Input Array Is Sorted

Pattern: Two Pointers

Difficulty: Easy

Time Complexity: O(n)
Space Complexity: O(1)

Key Idea:
- The array is already sorted.
- Use two pointers:
    i = 0        (left pointer)
    j = n - 1    (right pointer)

- Calculate:
    sum = numbers[i] + numbers[j]

- If sum == target:
    return {i+1, j+1}

- If sum < target:
    move left pointer right (i++)

- If sum > target:
    move right pointer left (j--)
/*
Learnings:
- Two Pointer pattern works efficiently on sorted arrays.
- When sum is too small, increase the left pointer.
- When sum is too large, decrease the right pointer.
*/
*/
