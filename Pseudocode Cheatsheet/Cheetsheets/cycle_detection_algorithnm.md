def detectCycle(head: ListNode) -> ListNode:
    slow = head
    fast = head
    
    # Detect if a cycle exists
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            break
    
    # If no cycle, return None
    if fast is None or fast.next is None:
        return None
    
    # Find the start of the cycle
    slow = head
    while slow != fast:
        slow = slow.next
        fast = fast.next
    
    return slow  # Start of the cycle
