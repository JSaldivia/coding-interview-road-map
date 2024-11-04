# Algorithm Cheatsheet for Interviews

## Overview
This subfolder contains a comprehensive cheatsheet covering core algorithms that are essential for technical interviews. Each algorithm includes a brief pseudocode, its use cases, time complexity, and potential alternative data structures or algorithms for more optimal solutions.

## Contents
### 1. Linked List Operations
- **Key Methods**: Initialization, `get`, `addAtHead`, `addAtTail`, `addAtIndex`, `deleteAtIndex`
- **Use Cases**: Data structures where dynamic insertion and deletion are necessary.
- **Time Complexity**:
  - `get`: \( O(n) \)
  - `addAtHead`, `addAtTail`: \( O(1) \)
  - `addAtIndex`, `deleteAtIndex`: \( O(n) \)

### 2. Stack
- **Core Methods**: `push`, `pop`, `peek`, `isEmpty`
- **Use Cases**: LIFO-based problems, such as backtracking, expression evaluation, and DFS.
- **Time Complexity**: \( O(1) \) for all operations.
- **Alternative**: **Deque** or recursion for certain problems.

### 3. Queue
- **Core Methods**: `enqueue`, `dequeue`, `front`, `isEmpty`
- **Use Cases**: FIFO-based operations like task scheduling, BFS, and real-time data processing.
- **Time Complexity**: \( O(1) \) for enqueue and dequeue.
- **Alternative**: **Linked List** for more flexible implementations or **Priority Queue** for priority-based tasks.

### 4. Hash Table
- **Core Methods**: `put`, `get`, `remove`
- **Use Cases**: Fast data retrieval, caching, and lookups.
- **Time Complexity**: \( O(1) \) average, \( O(n) \) worst-case due to collisions.
- **Alternative**: **BSTs** for sorted data or **Trie** for prefix-based searches.

### 5. Merge Sort
- **Use Case**: Sorting large datasets with stable, divide-and-conquer logic.
- **Time Complexity**: \( O(n \log n) \)
- **Alternative**: **Quicksort** for faster average performance or **Heap Sort** for space efficiency.

### 6. Bubble Sort
- **Use Case**: Educational purposes or sorting small datasets.
- **Time Complexity**: \( O(n^2) \) worst/average; \( O(n) \) best case.
- **Alternative**: **Insertion Sort** for nearly sorted data, or **Merge Sort** for larger datasets.

### 7. Insertion Sort
- **Use Case**: Sorting small or nearly sorted datasets.
- **Time Complexity**: \( O(n^2) \) worst case; \( O(n) \) best case for sorted data.
- **Alternative**: **Merge Sort** for larger datasets or **Quicksort** for faster average cases.

### 8. Sliding Window Technique
- **Use Case**: Problems involving contiguous subarrays, such as finding the maximum sum of subarrays.
- **Time Complexity**: \( O(n) \)
- **Alternative**: **Prefix sums** for cumulative data processing or **two-pointer technique** for specific subarray problems.

## How to Use
Each pseudocode snippet is provided to help you understand the implementation logic for each algorithm. Review each algorithm's description, use case, and alternatives to ensure you can articulate their applications during interviews and know when to opt for a more optimal solution.

## Additional Notes
- **Algorithm Selection**: Understanding which algorithm to use based on the problem's constraints is crucial. For instance, **Merge Sort** is stable and efficient, while **Quicksort** can be faster on average but is not stable.
- **Data Structures**: Pairing the right data structure with an algorithm (e.g., using a **priority queue** with BFS for shortest-path problems) can lead to significant performance improvements.

This cheatsheet serves as a quick reference guide to reinforce your knowledge and prepare you for coding interviews.
