"""Given a singly linked list and a number k, you are required to complete the function modularNode() which returns the modular node of the linked list.
A modular node is the last node of the linked list whose Index is divisible by the number k, i.e. i%k==0.
Note: If no such node is available, return -1. We are following 1 indexing."""

int modularNode(Node* head, int k)
{
	int i = 1;
	int m = -1;
	while(head){
	    if(i%k == 0){
	        m = head->data;
	    }
	    head = head->next;
	    i++;
	}
	return m;
}