### Problem: Trapping Rain water

### Pattern: 
Two Pointers

### Difficulty: 
Hard

### Time Complexity: 
building leftMax -> O(n) 
building RightMax -> O(n) 
calculating trapping water -> O(n)
- Overall: O(n)
  
### Space Complexity: 
leftMax array -> O(n) 
RightMax array -> O(n) 
- Overall: O(n)
  
### Approach 
this problem uses Prefix Maximum abd Suffix Maximum arrays.
- leftMax[i] stores the tallest bar from the left up to index i
- RightMax[i] stores the tallest bar from the right up to index i
- the water trapped at each index is determined by the smallest of these two boundaries.

### Algorithm
- Create a leftMax array.
     leftMax[i] = max(leftMax[i-1], height[i])
- Create a rightMax array.
    rightMax[i] = max(rightMax[i+1], height[i])
- Traverse the array.
- Calculate trapped water at each index:
    water = min(leftMax[i], rightMax[i]) - height[i];

### Formula 
  Water at index i = min(leftMax[i], rightMax[i]) - height[i]
  The smaller boundary determines the maximum amount of water that can be stored.

### Dry Run
Height = [0,1,0,2,1,0,1,3,2,1,2,1]

leftMax
[0,1,1,2,2,2,2,3,3,3,3,3]

rightMax
[3,3,3,3,3,3,3,3,2,2,2,1]

Water at each index
0,0,1,0,1,2,1,0,0,1,0,0

Total = 6

### Mistakes I Made
1️. Wrong index while building rightMax
- Incorrect:

  rightMax[i] = max(rightMax[i-1], height[i]);

- Correct:

  rightMax[i] = max(rightMax[i+1], height[i]);

Since the array is built from right to left, each element depends on the value to its right.

2️. Incorrect water calculation

- Incorrect:

  min(leftMax[i], rightMax[i] - height[i]);

- Correct:

  min(leftMax[i], rightMax[i]) - height[i];

The subtraction happens after finding the smaller boundary.

### Key Learnings
- Prefix and Suffix arrays help precompute information in O(n) time.
- Always be careful with array indexing when traversing backwards.
- Runtime errors can occur due to invalid indices (like accessing rightMax[-1]).
- Parentheses matter! A small mistake in the formula can completely change the result.

### My Takeaway
This problem taught me how precomputing prefix and suffix maximums can simplify complex calculations. 
It also reinforced the importance of careful indexing and formula implementation, as even a single off-by-one error or misplaced parenthesis can lead to incorrect results or runtime errors.
