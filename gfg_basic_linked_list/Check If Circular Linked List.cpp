/* Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.
Note: The linked list does not contains any inner loop.*/

bool isCircular(Node *head)
{
    Node* temp = head;
    while(temp->next != head && temp->next != NULL){
        temp = temp->next;
    }
    if(temp->next == head){
        return true;
    }
    else{
        return false;
    }
}
