"""Given a singly linked list and a number k. Write a function to find the (N/k)th element, where N is the number of elements in the list. We need to consider ceil value in case of decimals."""

int fractional_node(struct Node *head, int k)
{
    struct Node* temp = head;
    int c = 0;
    while(temp!= NULL){
        c++;
        temp = temp->next;
    }
    int p = c/k;
    if(c%k != 0){
        p++;
    }
    int i = 1;
    while(i<p){
        head = head->next;
        i++;
    }
    return head->data;
}