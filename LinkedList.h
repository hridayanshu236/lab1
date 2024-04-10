#include<iostream>
#define linkedlist_h
class Node{
    public:
        int info;
        Node *next;

        Node(){}
        Node(int d) : info(d), next(nullptr){}
        Node(int d, Node *next): info(d), next(next){}
};

class Linkedlist{
    private:
        Node*HEAD;
        Node*TAIL;
    public:
        Linkedlist();
        ~Linkedlist();

        void add(Node *pred, int data);
        void addToHead(int data);
        void addToTail(int data);

        bool remove(int dat);
        bool removeFromHead(int &data);
        bool removeFromTail(int &data);

        bool isEmpty();
        void head(int &data);
};

