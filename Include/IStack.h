// #ifndef STACK_H
// #define STACK_H
#include "LinkedList.h"

class Stack //Interface class of stack
{
public:
    virtual bool isEmpty() = 0;
    virtual void push(int info) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
};

class LinkedListStack : public Stack //class LinkedListStack inherits the class Stack
{
public:
    LinkedListStack();
    ~LinkedListStack() {}
    virtual bool isEmpty();
    virtual void push(int info);
    virtual int pop();
    virtual int top();

private:
    LinkedList list1; //Inherits the linkedList object from Linkedlist files
};

class ArrayStack : public Stack //class ArrayStack inherits the class Stack
{
private:
    int *data;
    int topIndex;//Keeps track of topIndex
    int size;

public:
    ArrayStack(int size);
    bool isEmpty();
    bool isFull() const;
    void push(int info);
    int pop();
    int top();
};