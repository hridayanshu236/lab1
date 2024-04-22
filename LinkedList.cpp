#include<iostream>
#include "LinkedList.h"
Linkedlist::Linkedlist(){
    this->HEAD = NULL;
    this->TAIL = NULL;
}
bool Linkedlist::isEmpty(){
    return HEAD ==NULL;
}
void Linkedlist::addToHead(int data){
    Node *newNode = new Node(data, HEAD);
    if(this->isEmpty()){
        TAIL = newNode;
    }
    HEAD =newNode;
}

// void Linkedlist::addToTail(int data){
//     Node * newNode = new Node(data);
//     if(this->isEmpty){
//         HEAD = newNode;
//     }
// };

void Linkedlist::print(char separator){
    std::cout<<"Contents of the list: "<<std::endl;
    for(Node* t =HEAD; t!=NULL; t=t->next){
        std::cout<<t->info<<separator;
    }
}