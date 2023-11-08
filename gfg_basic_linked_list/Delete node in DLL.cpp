"""Given a doubly linked list and a position. The task is to delete a node from given position in a doubly linked list."""

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      Node* t = head_ref;
        int i=1;
        while(i<=x){
            if(i==x){
                if(t->next == NULL){
                    t->prev->next = NULL;
                }
                else if(t->prev == NULL){
                    t = t->next;
                    t->prev = NULL;
                    head_ref = t;
                }
                else{
                    t->prev->next = t->next;
                    t->next->prev = t->prev;
                }
            }
            else{
                t = t->next;
            }
            i++;
        }
        return head_ref;
    }
};