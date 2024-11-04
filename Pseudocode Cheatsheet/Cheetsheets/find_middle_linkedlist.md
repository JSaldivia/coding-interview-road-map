def findMiddle(head: ListNode) -> ListNode:
    slow = head
    fast = head
    
    while fast is not None and fast.next is not None:
        # Move slow pointer by one step
        slow = slow.next
        # Move fast pointer by two steps
        fast = fast.next.next
    
    return slow  # Middle node
