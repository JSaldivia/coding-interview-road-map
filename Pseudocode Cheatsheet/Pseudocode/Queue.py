# Used for: First-In-First-Out (FIFO) problems like scheduling tasks, BFS, and handling requests.
# Big O: O(1) for enqueue and dequeue.
# Alternative DSA: Use linked lists for more flexibility or priority queues for priority-based processing.


from collections import deque

class Queue:
    def __init__():
        # Initialize an empty queue
        queue = deque()

    def enqueue(val):
        # Add an element to the end of the queue
        queue.append(val)

    def dequeue():
        # Remove and return the front element of the queue
        return queue.popleft() if not isEmpty() else None

    def front():
        # Return the front element without removing it
        return queue[0] if not isEmpty() else None

    def isEmpty():
        # Check if the queue is empty
        return len(queue) == 0
