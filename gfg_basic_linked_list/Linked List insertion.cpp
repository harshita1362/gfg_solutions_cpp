// Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
// Hint: When inserting at the end, make sure that you handle NULL explicitly.

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* n= new Node(x);
       n->next = head;
       return n;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node* n= new Node(x);
        if(head == NULL){
            return n;
        }
        Node* node = head;
        while(node->next != NULL){
            node = node->next;
        }
        node->next = n;
        return head;
    }
};