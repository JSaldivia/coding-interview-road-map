def reverseList(head: ListNode) -> ListNode:
    prev = None
    current = head
    
    while current is not None:
        # Save next node
        next_node = current.next
        # Reverse current node's pointer
        current.next = prev
        # Move pointers one step forward
        prev = current
        current = next_node
    
    return prev  # New head of the reversed list
