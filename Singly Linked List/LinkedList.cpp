#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

//constructor setting head to NULL
LinkedList::LinkedList()
{
    Head = NULL;
}


// isEmpty function checking list is empty or not
bool LinkedList::isempty()
{
    if(Head==NULL)
        return true;
    else
        return false;
}

// search for node and return address of that particular node
Node* LinkedList::Search(int key)
{
    Node* temp = Head;
    while(temp!=NULL)
    {
        if(temp->Getdata()==key)
            return temp;
        else
            temp = temp->Getnext();
    }


}


// insert element at head of the linkedlist
void LinkedList::insertAtHead(int val)
{
    Node* newnode = new Node();
    newnode->Setdata(val);
    newnode->Setnext(Head);
    Head = newnode;
}


// insert element at the end of the list
void LinkedList::insertAtLast(int val)
{
    Node* newnode = new Node();
    newnode->Setdata(val);
    if(isempty())
    {
        newnode->Setnext(Head);
        Head = newnode;
    }
    else{
    Node* temp = Head;
    while(temp->Getnext()!=NULL)
    {
        temp = temp->Getnext();
    }
    newnode->Setnext(temp->Getnext());
    temp->Setnext(newnode);
    }
}


// insert element after any existing node in the list
void LinkedList::insertAfterNode(int key , int val)
{

    Node* newnode = new Node();
    newnode->Setdata(val);
    Node* temp = Search(key);
    if(Search(key)==NULL)
    {
        cout<<"NO MATCH FOUND FOR NODE KEY"<<endl;
    }
    else{
    newnode->Setnext(temp->Getnext());
    temp->Setnext(newnode);
    }
}

void LinkedList::Update(int Oldval, int newVal)
{
    Node* temp = Search(Oldval);
    if(temp != NULL)
    {
        temp->Setdata(newVal);
    }
    else
    {
        cout<<"No such Value find"<<endl;
    }
}
// // deleting top/head element of the node
void LinkedList::deleteAtHead()
{
    Node* ptr = Head;
    if(isempty())
        cout<<"LIST IS EMPTY"<<endl;
    else{
        Head = Head->Getnext();
    delete ptr;
    }

}


// delete last element in the list
void LinkedList::deleteAtLast()
{
    Node* ptr = Head->Getnext();
    Node* temp = Head;
    while(ptr->Getnext()!=NULL)
    {
        ptr = ptr->Getnext();
        temp = temp->Getnext();
    }
    delete ptr;
    temp->Setnext(NULL);


}

//void LinkedList::deleteMultipleNodeAtonce(int key1 , int key2)
//{
//    if(isempty())
//        cout<<"LIST IS EMPTY"<<endl;
//    else{
//    Node* temp1 = Search(key1);
//    Node* temp2 = Search(key2);
//        if(temp1->Getdata()==key1 && temp2->Getdata()==key2)
//        {
//            Node* ptr = temp1->Getnext();
//            temp1->Setnext(temp2);
//            while(ptr->Getnext()!=temp2)
//            {
//                delete ptr;
//                ptr = ptr->Getnext();
//            }
//
//        }
//        else
//            cout<<"DATA NOT FOUND"<<endl;
//    }
//
//}


//delete any existing node from the list
void LinkedList::deleteSpecificNode(int key1)
{
    if(isempty())
       cout<<"LIST IS EMPTY"<<endl;
    else{
        Node* temp1 = Search(key1);
        Node* temp2 = Head;
        while(temp2!=NULL)
        {
            if(temp2->Getnext()==temp1)
            {
                temp2->Setnext(temp1->Getnext());
            }
            else
                temp2 = temp2->Getnext();
        }
        delete temp1;
    }
}


// reverse the list elements
void LinkedList :: Reverse()
{
   Node* p_node = NULL;
   Node* c_node = Head;
   Node* n_node = Head;
   while(n_node != NULL)
   {
       //n_node -> Setnext(c_node->Getnext()); // ERROR
       n_node = c_node->Getnext();
       c_node -> Setnext(p_node);
       p_node = c_node;
       c_node = n_node;
   }
   Head = p_node;
}

// swap two node in the list
void LinkedList :: swapNode(int key1,int key2)
{
    Node* x = Search(key1);
    Node* y = Search(key2);
   if(x==y)
   {
       return;
   }
   else if(x == NULL || y == NULL)
   {
       return;
   }
   else if(x == Head && y->Getnext()==NULL)
   {
       Node* py = Head;
       while(py->Getnext()!= y)
        {
            py = py -> Getnext();
        }
        y->Setnext(Head->Getnext());
        py->Setnext(x);
        Head=y;
        x->Setnext(NULL);
   }
   else if(x->Getnext() == y)
   {
      Node* px = Head;
      Node* py = Head;
      Node* ny = y->Getnext();
     while(px->Getnext()!= x)
      {
          px = px->Getnext();
      }
      px->Setnext(y);
      x->Setnext(ny);
      y->Setnext(x);

   }
    else
    {
        Node* px = Head;

            while(px->Getnext()!= x)
            {
                px = px -> Getnext();
            }
    Node* nx = x -> Getnext();
    Node* py = Head;
    while(py -> Getnext()!= y)
    {
        py = py->Getnext();
    }
    Node* ny = y->Getnext();
    px->Setnext(y);
    y->Setnext(nx);
    py->Setnext(x);
    x->Setnext(ny);
    }
}

// print all the list
void LinkedList::display()
{
    Node* temp=Head;
    if(isempty())
        cout<<"list is empty"<<endl;
    else{
    while(temp!=NULL)
    {
       cout<<temp->Getdata()<< " ";
        temp = temp ->Getnext();
    }
    }
}


LinkedList::~LinkedList()
{
    //dtor
}
