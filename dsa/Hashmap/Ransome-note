## Problem: Ransom Note

Pattern: HashMap / Frequency Counting

Difficulty: Easy

Time Complexity: O(n + m)

Space Complexity: O(1) (at most 26 lowercase English letters)

### Key Idea:

* Count all available characters from the magazine.
* Use those counts while forming the ransom note.
* Every time a character is used, decrease its count.
* If any required character is unavailable, return false.

### Steps:

* Create an unordered_map<char, int> freq;

* Traverse magazine:
  freq[ch]++;

* Traverse ransomNote:
  If freq[ch] == 0,
  return false;

  Otherwise:
  freq[ch]--;

* If all characters are successfully used:
  return true;

/*
Learnings:

* Frequency maps can be used not only for counting but also for resource tracking.
* Decreasing frequencies is a common technique in string problems.
* Always think of characters as available resources that can be consumed.
* Many interview problems involving strings can be simplified using frequency counting.
  */
