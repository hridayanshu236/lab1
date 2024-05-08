#include<iostream>
#include "LinkedListStack.h"
using namespace std;

bool LinkedListStack::isEmpty(){
    if(list1.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}

void LinkedListStack::push(int data){
    if(!isEmpty()){
    list1.addToHead(data);
    }
}

int LinkedListStack::pop(){
    if(!isEmpty()){
    list1.removeFromHead();
    }
}

int LinkedListStack::top(){
    if(!isEmpty()){
        list1.returnHead();
    }
}

int main(){
    LinkedListStack stack;
    stack.isEmpty();
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.isEmpty();
    stack.pop();
    stack.top();

}
