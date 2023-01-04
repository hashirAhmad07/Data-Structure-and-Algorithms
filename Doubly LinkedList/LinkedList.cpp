#include "LinkedList.h"
#include "Node .h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    Head = NULL;
}

bool LinkedList::isEmpty()
{
    if(Head==NULL)
        return true;
    else
        return false;
}

Node* LinkedList::Search(int key)
{
    Node* temp = Head;
    while(temp!=NULL)
    {
        if(temp->Getdata()==key)
            return temp;
        else
            temp = temp->GetNext();
    }
    return NULL;
}
void LinkedList::insertathead(int val)
{
    Node* newnode = new Node();

    if(isEmpty())
    {
        newnode->Setdata(val);
        newnode->SetNext(Head);
        newnode->SetPrev(NULL);
         Head = newnode;
    }
    else
    {
        newnode->Setdata(val);
        newnode->SetNext(Head);
        newnode->SetPrev(NULL);
        Head=newnode;
    }

}

void LinkedList::insertatlast(int val)
{
    Node* newnode = new Node();
    newnode->Setdata(val);
    Node* ptr = Head;
    if(isEmpty())
    {
         newnode->SetNext(Head);
         newnode->SetPrev(NULL);
         Head = newnode;
    }
    else{
        while(ptr->GetNext()!=NULL)
        {
            ptr = ptr->GetNext();
        }
        ptr->SetNext(newnode);
        newnode->SetPrev(ptr);
        newnode->SetNext(NULL);
    }
}

void LinkedList::insertafternode(int key , int val)
{
    Node* temp = Search(key);
    Node* newnode = new Node();
    newnode->Setdata(val);
    if(isEmpty())
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else if(temp==NULL)
    {
        cout<<"No Node Found"<<endl;
        return;
    }
    else if(temp->GetNext()==NULL)      //when you want to insert after last node
    {
        newnode->SetNext(NULL);
        newnode->SetPrev(temp);
        temp->SetNext(newnode);
    }
    else
    {
        newnode->SetNext(temp->GetNext());
        temp->SetNext(newnode);
        newnode->SetPrev(temp);
        newnode->GetNext()->SetPrev(newnode);
    }


}

void LinkedList::deleteathead()
{
    Node* ptr=Head;
    Head = Head->GetNext();
    delete ptr;
}

void LinkedList::deleteatlast()
{
   Node* ptr = Head->GetNext();
   Node* temp = Head;
   while(ptr->GetNext()!=NULL)
   {
       ptr = ptr->GetNext();
       temp = temp->GetNext();
   }
   temp->SetNext(NULL);
   delete ptr;
}

void LinkedList::deleteinbetween(int key)
{
    Node* temp = Search(key);
    Node* temp_next = temp->GetNext();
    Node* temp_prev = Head;
    if(isEmpty())
    {
        cout<<"list is Empty"<<endl;
        return;
    }
    else if(temp==NULL)
    {
        cout<<"Node Node Found"<<endl;
    }
    else if(Head==temp)
    {
        Head = Head->GetNext();
        delete temp;
    }
    else if(temp->GetNext()==NULL)
    {
        while(temp_prev->GetNext()!=temp)
        {
            temp_prev = temp_prev->GetNext();
        }
        temp_prev->SetNext(NULL);
        delete temp;
    }
    else
    {
    while(temp_prev->GetNext()!=temp)
    {
        temp_prev = temp_prev->GetNext();
    }
    temp_prev->SetNext(temp_next);
    delete temp;
    }
}
void LinkedList::display()
{
    if(isEmpty()){
        cout<<"list is Empty"<<endl;
    return;
    }
    else{
    Node* ptr=Head;
    cout<<"Data: ";
    while(ptr!=NULL)
    {
        cout<<ptr->Getdata()<<" ";
        ptr = ptr->GetNext();
    }
    }
}

void LinkedList::updatedataofnode(int key, int val)
{
    Node* ptr = Search(key);
    cout<<"VALUE IN  NODE BEFORE UPDATING IS: "<<ptr->Getdata();
    ptr->Setdata(val);
    cout<<"\nsVALUE IN  NODE BEFORE UPDATING IS: "<<ptr->Getdata();
}

LinkedList::~LinkedList()
{
    //dtor
}
