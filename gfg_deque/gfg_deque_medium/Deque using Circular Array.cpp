/*
Deque using Circular Array
Implement a Deque (Double Ended Queue) using a circular array, 
where the size of the array, n is given.
The Deque must support the following operations:
(i) insertFront(x): Adds an element x at the front of Deque.
(ii) insertRear(x): Adds an element x at the rear of Deque.
(iii) deleteFront(): Deletes an element from front of Deque. 
(iv) deleteRear(): Deletes an element from rear of Deque.
(v) frontEle(): Gets the front element from queue. Return -1 if it is empty.
(vi) rearEle(): Gets the last element from queue. Return -1 if it is empty.
There will be a sequence of queries queries[][]. 
The queries are represented in numeric form:
1 x : Call insertFront(x)
2 x : Call insertRear(x)
3 : Call deleteFront()
4 : Call deleteRear()
5 : Call frontEle()
6 : Call rearEle()
You just have to implement the functions insertFront, insertRear, deleteFront, deleteRear, frontEle and rearEle and the driver code will handle the input & output.
Note: It is guaranteed that all the queries are valid.
*/
class myDeque {
    int *arr;
    int n, front, rear;

public:
    myDeque(int n) {
        this->n = n;
        arr = new int[n];
        front = rear = -1;
    }

    void insertFront(int x) {
        if (front == -1) {
            front = rear = 0;
        } 
        else {
            front = (front - 1 + n) % n;
        }
        arr[front] = x;
    }

    void insertRear(int x) {
        if (rear == -1) {
            front = rear = 0;
        } 
        else {
            rear = (rear + 1) % n;
        }
        arr[rear] = x;
    }

    void deleteFront() {
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % n;
        }
    }

    void deleteRear() {
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            rear = (rear - 1 + n) % n;
        }
    }

    int frontEle() {
        if (front == -1)
            return -1;
        return arr[front];
    }

    int rearEle() {
        if (rear == -1)
            return -1;
        return arr[rear];
    }
};