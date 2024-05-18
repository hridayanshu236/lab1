#include <iostream>
#include "../Include/LinkedListStack.h"
using namespace std;

LinkedListStack::LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    if (list1.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedListStack::push(int info)
{
    list1.addToHead(info);
}

int LinkedListStack::pop()
{
    if (!list1.isEmpty())
    {
        int topInfo = list1.returnHead();
        list1.removeFromHead();
        return topInfo;
    }
    else
    {
        cout << "Stack is empty. Cannot pop." << endl;
        return -1; // Return an error value or handle appropriately
    }
}

int LinkedListStack::top()
{
    if (!list1.isEmpty())
    {
        return list1.returnHead();
    }
    else
    {
        cout << "Stack is empty. Cannot get top element." << endl;
        return -1; // Return an error value
    }
}

int main()
{
    LinkedListStack stack;
    if (stack.isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
    stack.push(5);
    stack.push(6);
    stack.push(7);
    cout << "Top element: " << stack.top() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Top element after pop: " << stack.top() << endl;
    if (stack.isEmpty())
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
}
