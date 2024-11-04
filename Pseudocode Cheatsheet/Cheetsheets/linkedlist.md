class MyLinkedList:

    def __init__():
        # Initialize the linked list
        # Set head to None and size to 0
        
    def get(index: int) -> int:
        # Check if index is out of bounds
        # Traverse the list to the index
        # Return the value at the index or -1 if invalid
        
    def addAtHead(val: int) -> None:
        # Create a new node with val
        # Set the new node's next to current head
        # Update head to the new node
        # Increment size
        
    def addAtTail(val: int) -> None:
        # Create a new node with val
        # If head is None, set head to the new node
        # Else, traverse to the end of the list
        # Set the last node's next to the new node
        # Increment size
        
    def addAtIndex(index: int, val: int) -> None:
        # Check if index is greater than size, return if true
        # If index is 0, call addAtHead(val)
        # If index is size, call addAtTail(val)
        # Traverse to the node just before the index
        # Create a new node with val
        # Set new node's next to current node's next
        # Set current node's next to the new node
        # Increment size
        
    def deleteAtIndex(index: int) -> None:
        # Check if index is out of bounds
        # If index is 0, set head to head.next
        # Else, traverse to the node just before the index
        # Update current node's next to skip the node at index
        # Decrement size
