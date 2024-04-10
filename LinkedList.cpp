#include<iostream>
#include "LinkedList.h"
void Linkedlist::addToHead(int data){
    Node *newNode = new Node(data, HEAD);
    if(this->isEmpty()){
        TAIL = newNode;
    }
    HEAD =newNode;
}

void Linkedlist::addToTail(int data){
    Node * newNode = new Node(data);
    if(this->isEmpty){
        HEAD = newNode;
    }
}