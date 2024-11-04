# Used for: Fast lookups, inserts, and deletions (e.g., dictionaries, caching).
# Big O:  O(1) average for get, put, and remove; 
#         O(n) worst case due to collisions.
# Alternative DSA: Use binary search trees (BSTs) for O(logn) operations with sorted data.

class HashTable:
    def __init__():
        # Initialize a hash table with buckets
        table = [[] for _ in range(100)]

    def hashFunction(key):
        # Simple hash function using modulo
        return hash(key) % len(table)

    def put(key, value):
        # Insert a key-value pair into the hash table
        bucket = table[hashFunction(key)]
        for i, (k, v) in enumerate(bucket):
            if k == key:
                bucket[i] = (key, value)
                return
        bucket.append((key, value))

    def get(key):
        # Retrieve a value by key
        bucket = table[hashFunction(key)]
        for k, v in bucket:
            if k == key:
                return v
        return None

    def remove(key):
        # Remove a key-value pair by key
        bucket = table[hashFunction(key)]
        for i, (k, _) in enumerate(bucket):
            if k == key:
                del bucket[i]
                return
