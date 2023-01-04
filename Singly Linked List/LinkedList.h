#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();

        Node* GetHead() { return Head; }
        void SetHead(Node* val) { Head = val; }
        bool isempty();
        Node* Search(int);
        void insertAtHead(int);
        void Update(int,int);
        void insertAtLast(int);
        void insertAfterNode(int,int);
        void deleteAtHead();
        void deleteAtLast();
        void Reverse();
        void swapNode(int,int);
        void deleteMultipleNodeAtonce(int,int);
        void deleteSpecificNode(int);
        void display();

    protected:

    private:
        Node* Head;
};

#endif // LINKEDLIST_H
