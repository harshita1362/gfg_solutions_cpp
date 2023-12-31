"""Given a single linked list of size M, your task is to complete the function sumOfLastN_Nodes(), which should return the sum of last N nodes of the linked list."""

def sumOfLastN_Nodes(head,n):
    lis=[]
    while head:
        lis.append(head.data)
        head=head.next
    lis.reverse()
    return sum(lis[:n:1])