#include<iostream>
#include"../Include/LinkedList.h"
using namespace std;

void LinkedList::printlist()// It displays the data of the node in the list
        {
            Node * newNode = HEAD;
            while(newNode!=NULL){ //Traversing until the newNode points to the last node
                 cout<<newNode->info<<endl; //Printing the required info of the node.
                 newNode = newNode->next;
            }
        }
bool LinkedList::isEmpty(){ //Checks if the Node is empty
    if (HEAD==NULL){
        return true; //returns true if it is empty
    }
    else{
        return false;//returns false if it is not empty
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
            while (newNode!=NULL)
            {
                cout<<newNode->info<<endl;
                newNode=newNode->next;
            }
}
void LinkedList::addAfter(int predecessorInfo, int newData) {
    // Check if the list is empty
    if (isEmpty()) {
        std::cout << "List is empty. Cannot add after predecessor." << std::endl;
        return;
    }

    Node* predecessor = nullptr;
    // Search for the predecessor node
    if (!retrieve(predecessorInfo, &predecessor)) {
        std::cout << "Predecessor node not found." << std::endl;
        return;
    }

    // Create a new node with the new data
    Node* newNode = new Node(newData);

    // Update the pointers to add the new node after the predecessor
    newNode->next = predecessor->next;
    predecessor->next = newNode;

    // If the predecessor was the tail, update the tail pointer
    if (predecessor == TAIL)
        TAIL = newNode;
}
int LinkedList::returnHead(){
    if (HEAD != NULL) {
        return HEAD->info;
    }
    return -1;
}
int LinkedList::returnTail(){
    if (TAIL != NULL) {
        return TAIL->info;
    }
    return -1;
}

void LinkedList::removeFromHead(){ //Removing node from head
    Node* newNode = HEAD;
    HEAD = HEAD->next;
    delete newNode;
}

void LinkedList::removeFromTail(){ //Removing from TAIL
    if(!isEmpty()){
        Node* newNode = TAIL; //creating a node pointer pointing to the TAIL of the linked list
        if(HEAD==TAIL){
             HEAD=TAIL=NULL;
        }
        else{
            Node *pred = HEAD; //Creating a predecessor node pointer pointing to the HEAD of the linked list

            //Traversing the predecessor pointer until the second last node of the linked list
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

void LinkedList::remove(int info){ //Function to remove the desired data from the linked list
    if(!isEmpty()){ 
        if(HEAD->info == info){
            removeFromHead(); //calling the removeFromHead function to remove the info if found in head of the linked list
        }
        else if(TAIL->info == info){ //calling the removeFromTail function to remove the info if found in tail of the linked list
            removeFromTail();
        }
        else{
            Node* newNode = HEAD->next; //creating a newNode pointer which points to the second node of the list
            Node* pred = HEAD; //creating a predecessor pointer pointing to the head of the list
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

void LinkedList::search(int info){ //Searches for the required data and returns true if it is found 
    Node* newNode = HEAD;
    bool found = false; //flag to indicate whether the info is found
    if(!isEmpty()){
        while(newNode!=NULL){
            if(newNode->info == info){
                cout<<"Info found"<<endl;
                found = true; //updating the flag once the info is found
                break; // breaking out of the while loop
            }
            newNode = newNode->next;
        } 
        if(!found){ //if the required info is not found
            cout<<"Info not found"<<endl;
        }
    }
}

bool LinkedList::retrieve(int data, Node** outputPtr) {
    Node* p = HEAD; // Initialize pointer p to traverse the list starting from HEAD

    while (p != nullptr && p->info != data) { //Traversing until the required info is found
        p = p->next;
    }

    if (p == nullptr) { // If p is nullptr, it means the data was not found in the list
        *outputPtr = nullptr; // Set outputPtr to nullptr
        return false; // Return false to indicate data not found
    } else {
        *outputPtr = p; // Set outputPtr to point to the node containing the data
        return true; // Return true to indicate data found
    }
}

