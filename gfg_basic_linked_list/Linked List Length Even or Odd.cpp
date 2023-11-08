"""Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked list and check whether the length of linked list is even or odd."""

int isLengthEvenOrOdd(struct Node* head)
{
    int num=0;
    while(head){
        num++;
        head = head->next;
    }
    return num%2 ==0? 0:1;
}