#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;
Node::Node()
{
    this->data = 0;
    next = NULL;
}

void Node::display()
{
    cout<<"Data: "<<Getdata()<<endl;
    cout<<"Address: "<<Getnext()<<endl;
}
Node::~Node()
{
    //dtor
}
