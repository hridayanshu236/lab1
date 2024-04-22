#include<iostream>
#define LinkedList_h

class Node{
    public:    
        int info;       //Creating an integer value to store in the node
        Node* next;     //Creating a next pointer of a node which points to another node

        Node(){};      //Default constructor
        Node(int info):info(info), next(nullptr){}
        Node(int info, Node* next):info(info), next(next){}
};

class LinkedList{
    private:
        Node* HEAD;     //Creating a HEAD node for the linked list.
        Node* TAIL;     //Creating a TAIL node for the linked list

    public:
        LinkedList(){}
        ~LinkedList(){}
        void printlist();
        bool isEmpty();
        void addToHead(int info);
        void addToTail(int info);
        void traverse();
        void removeFromHead();
        void removeFromTail();
        void remove(int);
};