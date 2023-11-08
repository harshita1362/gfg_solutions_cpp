"""Given a Singly Linked List of size N, delete all alternate nodes of the list."""

class Solution: 
    def deleteAlt(self, head):
        n=head
        while n!=None and n.next!=None:
            n.next=n.next.next
            n=n.next
        return head