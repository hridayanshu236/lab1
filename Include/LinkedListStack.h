#include "Linkedlisthome.h"

class Stack{
    public:
        virtual bool isEmpty() =0;
        virtual void push(int data) = 0;
        virtual int pop () = 0;

};

class LinkedListStack : public Stack {
    public:
        LinkedListStack();
        ~LinkedListStack();
        virtual bool isEmpty();
        virtual void push(int data);

        virtual int pop();
        virtual int top();

    private:
        LinkedList list1;
};