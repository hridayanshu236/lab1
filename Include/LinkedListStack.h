// #ifndef STACK_H
// #define STACK_H
#include "LinkedList.h"

class Stack{
    public:
        virtual bool isEmpty() =0;
        virtual void push(int info) = 0;
        virtual int pop () = 0;
         virtual int top()=0;

};

class LinkedListStack : public Stack {
    public:
        LinkedListStack();
        ~LinkedListStack(){}
        virtual bool isEmpty();
        virtual void push(int info);
        virtual int pop();
        virtual int top();

    private:
        LinkedList list1;
};

// 