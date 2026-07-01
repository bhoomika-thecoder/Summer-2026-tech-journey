## Problem: Find the Difference of Two Arrays 

Pattern: HashMap 

Difficulty: Easy

Time Complexity: O(n + m)

Space Complexity: O(n + m)

### Key Idea:

* Used unordered_set to store unique elements from both arrays.

* Insert all elements of nums1 into one hash set.
* Insert all elements of nums2 into another hash set.
* Traverse the first set and collect elements that don't exist in the second set.
* Traverse the second set and collect elements that don't exist in the first set.
* Return both result vectors.

This approach automatically removes duplicates while providing efficient lookups.


/*
### current progress :
Today's goal wasn't just solving another LeetCode problem—I also continued strengthening my C++ fundamentals through GeeksforGeeks. I'm becoming much more comfortable with STL containers like vectors and understanding how they work internally. Building a strong foundation now will definitely help me write cleaner and more efficient DSA solutions in the future.
  */
