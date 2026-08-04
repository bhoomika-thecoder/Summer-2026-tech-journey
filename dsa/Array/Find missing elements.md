# Problem: Find missing elements

Given an array of unique integers, return all the missing numbers between the smallest and largest elements in sorted order.

## My Approach

Initially, I thought of using the sum formula:

- Calculate the sum of the given array.
- Calculate the expected sum from the smallest to the largest number.
- Subtract the two sums to find the missing value.

This approach works perfectly when there is only one missing element.
Example:

Array: [1, 2, 4, 5]

Actual Sum = 12
Expected Sum = 15

Missing Number = 15 - 12 = 3

However, after analyzing the problem more carefully, I realized that multiple numbers can be missing.

For example:

Array: [1, 3, 6]

Expected Sum = 21
Actual Sum = 10

Difference = 11
The result 11 only represents the sum of the missing numbers (2 + 4 + 5), not the missing elements themselves.

## Final Solution
1. Sort the array.
2. Compare every pair of adjacent elements.
3. If the difference is greater than 1, all the numbers between them are missing.
4. Add those numbers to the answer vector.

## code 
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans; // To store the missing elements

        sort(nums.begin(), nums.end()); // Sort the input array to ensure the elements are in order

        for(int i = 0; i < nums.size() - 1; i++) { // Iterate through the sorted array

            // If there is a gap
            for(int j = nums[i] + 1; j < nums[i + 1]; j++) { //// Add the missing elements to the answer vector
                ans.push_back(j); //Add the missing element to the answer vector
            }
        }

        return ans;
    }
};
   
## Time Complexity
Sorting: O(n log n)
Traversing the array: O(n + k) (where k is the number of missing elements)
Overall Complexity: O(n log n)

## hashmap approach 

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) { 

        vector<int> ans; // to store the missing elements
        unordered_set<int> st(nums.begin(), nums.end()); // to store the elements of the array in a set for O(1) lookup

        int mini = *min_element(nums.begin(), nums.end()); // to find the minimum element in the array
        int maxi = *max_element(nums.begin(), nums.end()); // to find the maximum element in the array

        for(int i = mini; i <= maxi; i++) { // iterate from minimum to maximum element
            if(st.find(i) == st.end()) { // if the element is not found in the set, it is missing
                ans.push_back(i); // add the missing element to the answer vector
            }
        }

        return ans; // return the vector containing the missing elements
    }
};

## Approaches

### Approach 1: Sorting (Implemented)
- Sort the array.
- Check gaps between adjacent elements.
- Time: O(n log n)

### Approach 2: Hash Set
- Store all elements in an unordered_set.
- Traverse from minimum to maximum.
- If a number is not found, add it to the answer.
- Time: O(n) average
- Space: O(n)
