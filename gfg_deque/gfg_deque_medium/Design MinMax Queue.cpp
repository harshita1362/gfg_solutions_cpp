/*
Design MinMax Queue
Design a SpecialQueue data structure that functions like a normal queue 
but with additional support for retrieving the minimum and maximum element efficiently.
The SpecialQueue must support the following operations:
enqueue(x): Insert an element x at the rear of the queue.
dequeue(): Remove the element from the front of the queue.
getFront(): Return the front element without removing.
getMin(): Return the minimum element in the queue in O(1) time.
getMax(): Return the maximum element in the queue in O(1) time.
There will be a sequence of queries queries[][]. 
The queries are represented in numeric form:
1 x : Call enqueue(x)
2:  Call dequeue()
3: Call getFront()
4: Call getMin()
5: Call getMax()
The driver code will process the queries, call the corresponding functions, and print the outputs of getFront(), getMin(), getMax() operations.
You only need to implement the above five functions.
Note: It is guaranteed that all the queries are valid.
*/
class SpecialQueue {
    deque<int> q, mn, mx;

public:
    void enqueue(int x) {
        q.push_back(x);
        while (!mn.empty() && mn.back() > x)
            mn.pop_back();
        mn.push_back(x);
        while (!mx.empty() && mx.back() < x)
            mx.pop_back();
        mx.push_back(x);
    }

    void dequeue() {
        int x = q.front();
        q.pop_front();
        if (mn.front() == x)
            mn.pop_front();
        if (mx.front() == x)
            mx.pop_front();
    }

    int getFront() {
        return q.front();
    }

    int getMin() {
        return mn.front();
    }

    int getMax() {
        return mx.front();
    }
};