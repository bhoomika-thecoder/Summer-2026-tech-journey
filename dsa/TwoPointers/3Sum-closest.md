/*
Problem: 3Sum closest

Pattern: sorting + Two Pointers

Difficulty: Medium

Time Complexity: O(n^2)
Space Complexity: O(1)

-Key Idea:

1. Sort the array.
2. Fix one element using i.
3. Use two pointers (left and right) to find the best pair.
4. Compute the current sum.
5. If the current sum is closer to the target than the previous best, update closest.
6. If sum < target, move left to increase the sum.
7. If sum > target, move right to decrease the sum.
8. If sum == target, return immediately because you can't get any closer than an exact match.

*/
*/
