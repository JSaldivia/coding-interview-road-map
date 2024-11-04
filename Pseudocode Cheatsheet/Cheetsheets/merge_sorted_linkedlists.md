def mergeTwoLists(list1: ListNode, list2: ListNode) -> ListNode:
    dummy = ListNode()
    current = dummy
    
    while list1 is not None and list2 is not None:
        if list1.val <= list2.val:
            current.next = list1
            list1 = list1.next
        else:
            current.next = list2
            list2 = list2.next
        current = current.next
    
    # Append the remaining nodes
    if list1 is not None:
        current.next = list1
    if list2 is not None:
        current.next = list2
    
    return dummy.next  # Head of merged list
