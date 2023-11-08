"""Let's give it a try! You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. """

void MyStack ::push(int x) 
{
    StackNode* nn = new StackNode(x);
    nn->next = top;
    top = nn;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;
    }
    else{
        int x = top->data;
        top = top->next;
        return x;
    }
}