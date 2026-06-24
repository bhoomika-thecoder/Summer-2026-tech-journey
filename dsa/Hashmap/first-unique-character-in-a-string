## Problem: First Unique Character in a String

Pattern: HashMap / Frequency Counting

Difficulty: Easy

Time Complexity: O(n)

Space Complexity: O(1) (at most 26 lowercase English letters)

### Key Idea:

* Create a frequency map to count occurrences of each character.
* Traverse the string once and store frequency of every character.
* Traverse the string again.
* The first character whose frequency is 1 is the answer.
* If no such character exists, return -1.

### Steps:

* Create an unordered_map<char, int> freq;

* First pass:
  freq[ch]++;

* Second pass:
  Check each character in order.
  If freq[s[i]] == 1,
  return i;

* If no unique character is found:
  return -1;

/*
Learnings:

* Frequency maps are useful when a problem asks about occurrences of elements.
* Sometimes two traversals are still O(n).
* HashMaps allow constant-time lookup for character frequencies.
* Preserving the original order is important, which is why a second traversal is needed.
  */
