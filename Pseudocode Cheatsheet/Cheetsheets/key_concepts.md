# Algorithmic Key Concepts for Job Interviews

## Linked List Algorithms

### 1. Traversing a Data Structure
**Purpose**: Visit each node to access or modify elements.  
**Algorithm**:
- Start at the `head` node.
- Use a loop: `current = current.next`.
- Stop at the desired position or end of the list.  
**Complexity**: \( O(n) \).

### 2. Inserting an Element
**Purpose**: Insert an element at a specific position or at the start/end.  
**Algorithm**:
- Traverse to the node before the target index.
- Create a new node and adjust `next` pointers.  
**Complexity**: \( O(1) \) at head, \( O(n) \) at other positions.

### 3. Deleting an Element
**Purpose**: Remove an element from a specific position.  
**Algorithm**:
- Traverse to the node before the index.
- Adjust the `next` pointer to skip the node.  
**Complexity**: \( O(n) \).

### 4. Reversing a Linked List
**Purpose**: Reverse the node order.  
**Algorithm**:
- Use `prev`, `current`, and `next` pointers.
- Reverse `next` pointers iteratively.  
**Complexity**: \( O(n) \), \( O(1) \) space.

### 5. Two-Pointer Technique
**Purpose**: Solve problems efficiently using two pointers.  
**Algorithm**:
- Place one pointer at the head (`slow`) and another ahead (`fast`).
- Move `slow` one step and `fast` two steps for cycle detection or finding the middle.  
**Complexity**: \( O(n) \).

### 6. Searching for a Value
**Purpose**: Find if a value exists or return its index.  
**Algorithm**:
- Iterate through the list and check `current.val`.  
**Complexity**: \( O(n) \).

### 7. Merge Two Sorted Lists
**Purpose**: Combine two sorted lists.  
**Algorithm**:
- Use two pointers for each list and merge nodes in order.  
**Complexity**: \( O(n + m) \).

### 8. Detecting a Cycle
**Purpose**: Check if the list contains a cycle.  
**Algorithm**:
- Use `slow` and `fast` pointers.
- If they meet, a cycle exists; if `fast` reaches `None`, no cycle.  
**Complexity**: \( O(n) \).

### 9. Finding the Middle Node
**Purpose**: Find the middle of the list.  
**Algorithm**:
- Move `slow` one step and `fast` two steps until `fast` is at the end.  
**Complexity**: \( O(n) \).

## Regex Cheat Sheet

| Pattern | Description                              |
|---------|------------------------------------------|
| `.`     | Matches any single character             |
| `^`     | Matches the start of a string            |
| `$`     | Matches the end of a string              |
| `*`     | Matches zero or more of the preceding    |
| `+`     | Matches one or more of the preceding     |
| `?`     | Matches zero or one of the preceding     |
| `\\d`   | Matches any digit (0-9)                  |
| `\\D`   | Matches any non-digit                    |
| `\\w`   | Matches any word character (alphanumeric)|
| `\\W`   | Matches any non-word character           |
| `\\s`   | Matches any whitespace                   |
| `\\S`   | Matches any non-whitespace               |
| `[abc]` | Matches any character in the set         |
| `\|`    | Acts as OR between patterns              |
