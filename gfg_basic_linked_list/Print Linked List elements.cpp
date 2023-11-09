"""Given a linked list. Print all the elements of the linked list.
Note :- End of Line is handled by driver code itself. You just have to end with a single space."""

class Solution
{
    public:
    void display(Node *head)
    {
        while(head){
            cout<<head->data<<" ";
            head = head->next;
        }
    }
};