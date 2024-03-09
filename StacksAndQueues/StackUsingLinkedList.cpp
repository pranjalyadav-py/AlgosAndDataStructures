#include <bits/stdc++.h>
using namespace std;

// Dynamically: Using a linked list

// its a node only
class StackNode{
    int data;
    StackNode * next;
    int size;

    public:
    StackNode(int x){
        data = x;
        next = NULL;
    }
};

// have the top 
Class Stack{

    StackNode* top;
    int size;

    // constructor
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int x)
    {
        // make a new element to store x
        StackNode* element = new StackNode(x); // its next points to null
        element->next = top();
        top = element;
        size++;
    }

    int pop()
    {
        // check for underflow
        if(top == NULL)
        return -1;

        int topData  = top->data;

        StackNode temp = top;
        top = top -> next;
        delete temp;

        //maintain size dude
        size--;

        return topData;
    }

    int StackSize()
    {
        return size;
    }

    bool StackIsEmpty()
    {
        return top == NULL
    }
}