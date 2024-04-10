#include<iostream>

class Node{
    public:
        int info;
        Node *next;

        Node(){}
        Node(int d) : info(d), next(){}
        Node(int d, Node *next): info(d), next(next){}
};

class Linkedlist{
    private:
    
}