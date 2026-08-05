# LeetCode 88: Merge Sorted Array

## Problem

Given two sorted arrays, nums1 and nums2, merge them into a single sorted array in-place without using extra space.

----

## My Approach

Instead of merging from the beginning, I started filling the array from the end.

Since nums1 already has enough empty space (0s) at the end, placing the largest element at the last available position avoids overwriting useful elements.

Steps
1. Initialize three pointers:
   - m - 1 → Last valid element of nums1
   - n - 1 → Last element of nums2
   - last = m + n - 1 → Last position of nums1
2. Compare the last elements of both arrays.
3. Place the larger element at nums1[last].
4. Move the corresponding pointer backward.
5. Continue until one array is exhausted.
6. If elements remain in nums2, copy them into nums1.

## Example
nums1 = [1,2,3,0,0,0]
nums2 = [2,5,6]

Compare:
3 vs 6 → Place 6
3 vs 5 → Place 5
3 vs 2 → Place 3
2 vs 2 → Place 2
1 vs 2 → Place 2

Final Answer:
[1,2,2,3,5,6]

## Time Complexity
O(m + n)

Each element is visited only once.

## Space Complexity
O(1)

No extra array is used—the merge happens directly inside nums1.

## code 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1; // last index of merged array
        while(m>0 && n>0){ // merge in reverse order
            if(nums1[m-1]> nums2[n-1]){ // compare elements from the end of both arrays
                nums1[last] =nums1[m-1]; // place the larger element at the end of nums1
                m -= 1; // decrement the index of nums1
            }else{
                nums1[last]=nums2[n-1]; // place the larger element at the end of nums1
                n -= 1; // decrement the index of nums2
            }
            last -=1; // decrement the index of the merged array
        }
        while(n>0){ // if nums2 is not exhausted, copy remaining elements
            nums1[last] =nums2[n-1]; // place the remaining element from nums2 at the end of nums1
            n -=1; // decrement the index of nums2
            last -=1; // decrement the index of the merged array
        }
    }
};
