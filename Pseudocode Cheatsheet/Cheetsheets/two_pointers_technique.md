def getIntersectionNode(headA: ListNode, headB: ListNode) -> ListNode:
    if headA is None or headB is None:
        return None
    
    pointerA = headA
    pointerB = headB
    
    while pointerA != pointerB:
        # Switch to the other list when reaching the end
        pointerA = headB if pointerA is None else pointerA.next
        pointerB = headA if pointerB is None else pointerB.next
    
    return pointerA  # Intersection node or None
