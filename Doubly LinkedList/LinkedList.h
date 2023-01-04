#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node .h"


class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();

        Node* GetHead() { return Head; }
        void SetHead(Node* val) { Head = val; }
        bool isEmpty();
        Node* Search(int);
        void insertathead(int);
        void insertatlast(int);
        void insertafternode(int,int);
        void deleteathead();
        void deleteatlast();
        void deleteinbetween(int);
        void updatedataofnode(int,int);
        void display();

    protected:

    private:
        Node* Head;
};

#endif // LINKEDLIST_H
