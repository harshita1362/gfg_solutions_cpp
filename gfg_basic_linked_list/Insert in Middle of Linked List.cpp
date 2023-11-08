"""Given a linked list of size N and a key. The task is to insert the key in the middle of the linked list."""

Node* insertInMiddle(Node* head, int x)
{
    struct Node* temp = head;
    int c = 0;
    while(temp!= NULL){
        c++;
        temp = temp->next;
    }
    int i = 1;
    int m = (c+1)/2;
    Node* nn = new Node(x);
    temp = head;
    while(i<m){
        temp = temp->next;
        i++;
    }
    Node* n = temp->next;
    temp->next = nn;
    nn->next = n;
    return head;
}