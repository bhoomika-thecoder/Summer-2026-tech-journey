/*
Problem: 4Sum

Pattern: Sorting+ Two Pointers

Difficulty: Medium

Time Complexity: sorting- O(n log n), nested loops+ two pointer: O(n^3)
Space Complexity: O(1)

-Approach:
1. sort the array
2. fix the first element (i)
3. fix the second element {j)
4. use two pointers (l and h) to find the remaining two numbers. 
5. skip the duplicate values for i,j,l, and h to avoid duplicate quadruplets.

- Algorithm:
1. sort the array.
2. Iterate through the array with i
3. skip the duplicate values of i
4. iterate with j starting with i+1
5. Skip the duplicate values of j. 
6. Calculate the remaining target.

long long tSum= 1LL* traget- nums[i]- nums[j];

7. initialize: 
l =j + 1;
h = n - 1;

8. compare:

long long sum= 1LL* nums[l] + nums[h];

- if sum == tSum -> stores the quadruplet
- if sum <tSum -> move l++;
- if sum >tSum -> move h--;

9. skip duplicate values after finding a vaild qudaruplet

-why Sorting? 
it allows us to use the 2 pointer technique.
easily skip duplicate elements
reduce time complexity from O(n^4) TO O(n^3) 

-why use long long? 

so, while solving, i encountered a runtime error because of integer overflow.

example,
target = -294967296
nums[i] = 1000000000
nums[j] = 1000000000

computing with : target - nums[i] - nums[j];

produces: -2294967296 
this value is smaller than INT_MIN, so it cannot be stored in an int.

i used long long while solving this:

long long tSum= 1LL * target- nums[i] - nums[j];
long long sum= 1LL* nums[l] = nums[h];

so, 1LL converts the entire expression into long long, thus preventing overflow.

*/
*/
