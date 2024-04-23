#include<iostream>
#include"Linkedlisthome.h"
using namespace std;
void LinkedList::printlist()// it displays the data in the list
        {
            Node * newNode = HEAD;
            while(newNode!=NULL){ //Traversing until the newNode points to the last node
                 cout<<newNode->info<<endl; //Printing the required info of the node.
                 newNode = newNode->next;
            }
        }
bool LinkedList::isEmpty(){ //Checks if the Node is empty
    if (HEAD==NULL){
        return true;
    }
    else{
        return false;
    }
}

void LinkedList::addToHead(int info){ //adding node from Head
    Node* newNode = new Node(info);
    newNode->info=info; 
    newNode->next = HEAD;
    HEAD = newNode;
    if(TAIL==NULL){
        TAIL = newNode;
    }
}

void LinkedList::addToTail(int info){ //adding node from Tail
    Node *newNode = new Node(info);
    if(TAIL==NULL){
        HEAD = newNode;
        newNode->info = info;
        newNode->next = NULL;
        TAIL = newNode;
    }
    else{
        newNode->info = info;
        newNode->next = NULL;
        TAIL->next = newNode;
        TAIL = newNode;
    }
}
void LinkedList::traverse(){ //Traversing the given linked list
            Node* newNode = HEAD;
            while (newNode->next!=NULL)
            {
                newNode=newNode->next;
            }
}

void LinkedList::removeFromHead(){ //Removing node from head
    Node* newNode = HEAD;
    HEAD = HEAD->next;
    delete newNode;
}

void LinkedList::removeFromTail(){ //Removing from TAIL
    if(!isEmpty()){
        Node* newNode = TAIL;
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
    if(!isEmpty()){
        if(HEAD->info == info){
            removeFromHead();
        }
        else if(TAIL->info == info){
            removeFromTail();
        }
        else{
            Node* newNode = HEAD->next;
            Node* pred = HEAD;
            while(pred->next!=NULL){
                if(newNode->info == info)break;
                else{
                    pred = pred->next;
                    newNode= newNode->next;
                }
            }
            if (newNode!=NULL){
                pred->next = newNode->next;
                delete newNode;
            }
            else{
                TAIL = pred;
                delete newNode;
            }
            
        }
    }
}


int main(){
    LinkedList list1;
    // list1.printlist();
    list1.addToHead(2);
    list1.addToTail(3);
    list1.addToTail(4);
    list1.printlist();
    list1.removeFromHead();
    list1.removeFromTail();
    list1.printlist();

}