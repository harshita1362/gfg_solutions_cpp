/*
Implementation of Deque using doubly linked list
Implement a Deque (Double Ended Queue) using a doubly linked list.
The Deque must support the following operations:
(i) insertFront(x): Adds an element x at the front of Deque.
(ii) insertRear(x): Adds an element x at the rear of Deque.
(iii) deleteFront(): Deletes an element from front of Deque. 
(iv) deleteRear(): Deletes an element from rear of Deque.
(v) getFront(): Gets the front element from queue. Return -1 if it is empty.
(vi) getRear(): Gets the last element from queue. Return -1 if it is empty.
There will be a sequence of queries queries[][]. 
The queries are represented in numeric form:
1 x : Call insertFront(x)
2 x : Call insertRear(x)
3 : Call deleteFront()
4 : Call deleteRear()
5 : Call getFront()
6 : Call getRear()
You just have to implement the functions insertFront, insertRear, deleteFront, 
deleteRear, getFront and getRear and the driver code will handle the input & output.
Note: It is guaranteed that all the queries are valid.
*/
class Node {
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = next = nullptr;
    }
};

class myDeque {
    Node* head;
    Node* tail;

public:
    myDeque() {
        head = tail = nullptr;
    }

    void insertFront(int x) {
        Node* temp = new Node(x);

        if (head == nullptr) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    void insertRear(int x) {
        Node* temp = new Node(x);

        if (tail == nullptr) {
            head = tail = temp;
        } else {
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    void deleteFront() {
        if (head == nullptr)
            return;

        Node* temp = head;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
    }

    void deleteRear() {
        if (tail == nullptr)
            return;

        Node* temp = tail;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
    }

    int getFront() {
        if (head == nullptr)
            return -1;
        return head->data;
    }

    int getRear() {
        if (tail == nullptr)
            return -1;
        return tail->data;
    }
};