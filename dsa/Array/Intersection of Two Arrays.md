# LeetCode 349: Intersection of Two Arrays

## Problem

Given two integer arrays, return an array containing only the unique elements that appear in both arrays.

## My Approach

I solved this problem using the Sorting + Two Pointers technique.

## Steps

1. Sort both arrays.
2. Initialize two pointers (i and j) at the beginning of each array.
3. Compare the current elements:
  - If they are equal, add the element to the result.
  - Skip all duplicate occurrences in both arrays.
  - Move both pointers forward.
4. If the current element in nums1 is smaller, move i.
5. Otherwise, move j.
6. Continue until one of the arrays is fully traversed.

This ensures that every common element is added only once.

## Example

Input
  nums1 = [1,2,2,1]
  nums2 = [2,2]
- After Sorting
  nums1 = [1,1,2,2]
  nums2 = [2,2]
- Traversal
1 < 2 → Move i

1 < 2 → Move i

2 == 2 → Add 2
Skip remaining duplicate 2's

Output
[2] 

## Algorithm

1. Sort both arrays.
2. Initialize two pointers.
3. Compare current elements.
4. If equal:
   Add to the answer.
   Skip duplicate values.
   Move both pointers.
5. Otherwise, move the pointer pointing to the smaller element.
6. Return the result.

## Code 
class Solution {
public:
    int smallestNumber(int n, int t) { //smallest number with n digits and divisible by t
        while(1){ //infinite loop
            int prod = 1; //product of digits
            //find the digits and multiply with product
            int cpy = n; //copy of n
            while(cpy){ //while cpy is not zero
                int rightMostDigit=cpy%10; //get the right most digit
                prod=prod*rightMostDigit; //multiply the right most digit with product
                cpy=cpy/10; //divide cpy by 10 to remove the right most digit
            }
            if(prod%t==0) return n; //if product is divisible by t, return n
            n++; //increment n to check the next number
        }
        return 1; //this line will never be reached but is required to avoid compiler warning
    }
};

## Time Complexity

Sorting: O(m log m + n log n)

Traversal: O(m + n)

Overall: O(m log m + n log n)

Where:

m = size of nums1
n = size of nums2

## Space Complexity
O(1)
