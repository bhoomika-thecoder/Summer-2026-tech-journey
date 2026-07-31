# LeetCode 389 - Find the Difference
----
Problem Summary:

Given two strings s and t, where:

t is formed by randomly shuffling s
One additional character is added to t

The task is to return the extra character that was added.

## Approach

Instead of using a frequency array or hash map, this solution leverages the ASCII values of characters.

Steps:
1. Calculate the sum of ASCII values of all characters in string s.
2. Calculate the sum of ASCII values of all characters in string t.
3. The difference between the two sums corresponds to the ASCII value of the extra character.
4. Convert the difference back to a character and return it.

## important key: 
Since both strings contain the same characters except for one extra character in t, the total ASCII sum of t will always be greater by exactly the ASCII value of that extra character.

return (char)(sum_t - sum_s);

## Algorithm

1. Initialize sum_s to 0.
2. Traverse string s and add each character's ASCII value to sum_s.
3. Initialize sum_t to 0.
4. Traverse string t and add each character's ASCII value to sum_t.
5. Return the character represented by sum_t - sum_s.
   
## Complexity Analysis
Time Complexity: O(n)
Space Complexity: O(1)
