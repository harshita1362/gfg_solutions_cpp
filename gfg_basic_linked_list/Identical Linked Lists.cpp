"""Given two Singly Linked List of N and M nodes respectively. The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have same data and with same arrangement too."""

def areIdentical(head1, head2):
    n1 = head1,n2 = head2
    while(n1 != None and n2 != None):
        if(n1.data != n2.data):
            return false
        n1 = n1.next
        n2 = n2.next
    if(n1 != None or n2 != None):
        return false
    return true
