/* Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.*/

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int num = 0;
        while(head){
            num++;
            head = head->next;
        }
        return num;
    }
};