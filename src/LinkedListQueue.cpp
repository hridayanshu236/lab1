#include "../Include/IQueue.h"
#include<iostream>
bool LinkedListQueue::isEmpty() {
    return list.isEmpty();
}

void LinkedListQueue::enqueue(int info) {
    list.addToTail(info); 
}

int LinkedListQueue::dequeue() {
    if (isEmpty()) {
         std::cout << "Queue is empty" << std::endl;
    }
    int frontInfo = list.returnHead();
    list.removeFromHead();
    return frontInfo;
}

int LinkedListQueue::front() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    }
    return list.returnHead();
}
int LinkedListQueue::rear() {
    if (isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    }
    return list.returnTail();
}
int main(){
       LinkedListQueue llQueue;
        std::cout << "Testing LinkedListQueue:" << std::endl;

        if (llQueue.isEmpty()) {
            std::cout << "The queue is empty" << std::endl;
        }

        llQueue.enqueue(10);
        llQueue.enqueue(20);
        llQueue.enqueue(30);
        std::cout << "Front element: " << llQueue.front() << std::endl; // Output: 10
        std::cout << "Rear element: " << llQueue.rear() << std::endl;   // Output: 30

        std::cout << "Dequeued element: " << llQueue.dequeue() << std::endl; // Output: 10
        std::cout << "Front element after dequeue: " << llQueue.front() << std::endl; // Output: 20
        std::cout << "Rear element after dequeue: " << llQueue.rear() << std::endl;   // Output: 30


}