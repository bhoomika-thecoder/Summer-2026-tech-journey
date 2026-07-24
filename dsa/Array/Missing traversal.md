## Problem 268: Missing Number

Find the missing number from an array containing n distinct numbers in the range [0, n].

Example:

Input: [3,0,1]
Output: 2

### Pattern: Array Traversal

### Difficulty: 
Easy

### Time Complexity:
O(n)

### Space Complexity: 
O(1)

### Key Idea:
- instead of calculating the sum using the formula:

n * (n + 1) / 2

- I used a running difference.

- Initialize the answer with n (array size).
- Traverse the array.
- Add the current index.
- Subtract the current array element.
- The remaining value is the missing number.

### Intuition
Every number from 0 to n should exist exactly once.

During traversal,

every index is added
every array value is subtracted

Since every existing number cancels out, only the missing number remains.

Example:

nums = [9,6,4,2,3,5,7,0,1]

Initial answer = 9

answer = 9
+0-9
+1-6
+2-4
+3-2
+4-3
+5-5
+6-7
+7-0
+8-1

Final answer = 8

### code :
Code (C++)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int result = size;

        for (int i = 0; i < size; i++) {
            result += i - nums[i];
        }

        return result;
    }
};
### What I Learned
- How values can be cancelled using addition and subtraction.
- There's no need to compute the sum separately.
- This approach achieves constant space while scanning the array only once.
- It strengthened my understanding of using mathematical properties in array problems.
