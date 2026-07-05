## Problem: Two Sum

**Pattern:** Hash Map

**Difficulty:** Easy

**Time Complexity:** O(n)

**Space Complexity:** O(n)

### Key Idea

- Traverse the array only once.
- For every element, calculate the remaining value required to reach the target.
- Check if that remaining value already exists in the hash map.
- If it exists, return the stored index and the current index.
- Otherwise, store the current element and its index in the hash map.
- Hash Map provides O(1) average lookup time, making the overall solution O(n).

### Learning

- Learned how Hash Maps reduce a nested-loop problem from O(n²) to O(n).
- Understood when to store values and when to search for complements.
