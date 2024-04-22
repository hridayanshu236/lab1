#include<iostream>
#include"Linkedlisthome.h"
using namespace std;
void LinkedList::printlist()// it displays the data in the list
        {
            Node * newNode = new Node();
            newNode = HEAD;
            while(newNode!=NULL){
                 cout<<newNode->info<<endl;
                 newNode = newNode->next;
            }
        }
bool LinkedList::isEmpty(){
    if (HEAD==NULL){
        return true;
    }
    else{
        return false;
    }
}

void LinkedList::addToHead(int info){ //adding node from Head
    Node* newNode = new Node();
    newNode->info=info;
    newNode->next = HEAD;
    HEAD = newNode;
    if(TAIL==NULL){
        TAIL = newNode;
    }
}

void LinkedList::addToTail(int info){ //adding node from Tail
    Node *newNode = new Node();
    if(TAIL==NULL){
        HEAD = newNode;
        newNode->info = info;
        newNode->next = NULL;
        TAIL = newNode;
    }
    else{
        newNode->info = info;
        newNode->next = NULL;
        TAIL = newNode;
    }
}
void LinkedList::traverse(){ //Traversing the given linked list
            Node* newNode = new Node();
            while (newNode->next!=NULL)
            {
                newNode=newNode->next;
            }
}

void LinkedList::removeFromHead(){
    Node* newNode = new Node();
    newNode = HEAD;
    HEAD = HEAD->next;
    delete newNode;
}

void LinkedList::removeFromTail(){
    if(!isEmpty()){
        Node* newNode = new Node();
        newNode = TAIL;
        if(HEAD==TAIL){
             HEAD=TAIL=NULL;
        }
        else{
            Node *pred = HEAD;
            while(pred->next!=TAIL){
            pred = pred->next;
            }
        TAIL = pred;
        TAIL->next = NULL;
        }
         delete newNode;
    }
    else cout<<"Empty"<<endl;
}

void LinkedList::remove(int info){
    if(!isEmpty){
        if(HEAD->info == info){
            removeFromHead();
        }
        else if(TAIL->info == info){
            removeFromTail();
        }
        else{
            Node* newNode = new Node();
            newNode = HEAD->next;
            Node* pred = new Node();
            pred = HEAD; 
            while(pred->next!=NULL){
                if(newNode->info == info)break;
                else{
                    pred = pred->next;
                    newNode= newNode->next;
                }
            }
            
        }
    }
}


int main(){
    LinkedList list1;
    list1.printlist();
    list1.addToHead(2);
    list1.addToTail(3);
    list1.printlist();

}