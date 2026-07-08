### Problem: Valid Palindrome (LeetCode 125)

## Difficulty: easy

## Time Complexity
O(n)

## Space Complexity
O(1)

## Approach
This problem is solved using the Two Pointer technique.

- Place one pointer (left) at the beginning of the string.
- Place another pointer (right) at the end.
- Ignore all non-alphanumeric characters using isalnum().
- Compare characters after converting them to lowercase using tolower().
- If the characters don't match, return false.
- Otherwise, continue moving both pointers until they meet.

## Algorithm 
1. Initialize:

      left = 0
      right = s.length() - 1

2. While left < right:
- If s[left] is not alphanumeric, move left++.
- Else if s[right] is not alphanumeric, move right--.
- Otherwise:
  -Convert both characters to lowercase.
  -Compare them.
  -If they are different, return false.
  -Otherwise, move both pointers inward.
3. If the loop completes, return true.

## Functions Used

isalnum() 
- Checks whether a character is an alphabet or a digit.

isalnum('A')  // true
isalnum('7')  // true
isalnum('#')  // false
isalnum(' ')  // false

- Used to skip spaces and special characters.

tolower()

- Converts uppercase letters to lowercase.

tolower('A') -> 'a'
tolower('P') -> 'p'

- Used because palindrome comparison is case-insensitive.

## Dry Run

Input:

"A man, a plan, a canal: Panama"

After ignoring spaces and special characters:

amanaplanacanalpanama

Comparisons:

a == a // true
m == m // true
a == a // true
n == n // true
...

All characters match.

Output:

true

## Key Learnings
- Two Pointers can efficiently solve string problems in O(n) time.
- isalnum() helps ignore unwanted characters without creating a new string.
- tolower() makes comparison case-insensitive.
- Processing the string in-place is more space-efficient than building a filtered string.

## Mistake to Avoid

When skipping characters, remember to check for non-alphanumeric characters.
if(!isalnum(s[left]))
    left++;

Otherwise, you'll skip valid characters instead of invalid ones.

## Takeaway

This problem demonstrated how the Two Pointer technique can be applied to strings while efficiently handling spaces, punctuation, and case differences. 
It also introduced useful C++ character functions like isalnum() and tolower(), which simplify string processing without increasing space complexity.
