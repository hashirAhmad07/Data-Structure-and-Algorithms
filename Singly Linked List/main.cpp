#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

int main()
{
    LinkedList obj; // object of out linkedlist class
   while(1)
    {
        // Menu
        cout<<"\n\n----------------------------------"<<endl;
        cout<<"\t   LINKED LIST "<<endl;
        cout<<"----------------------------------"<<endl;
        cout<<"||PRESS 1 TO INSERT DATA        ||\n"
             "||PRESS 2 TO UPDATE DATA        ||\n"
             "||PRESS 3 TO DELETE DATA        ||\n"
             "||PRESS 4 TO SEARCH DATA        ||\n"
             "||PRESS 5 TO SWAP NODES         ||\n"
             "||PRESS 6 TO CHECK LIST IS EMPTY||\n"
             "||PRESS 7 TO REVERSE THE LIST   ||\n"
             "||PRESS 8 TO DISPLAY            ||\n"
             "||PRESS 9 TO EXIT               ||"<< endl;
        cout<<"------>"<<endl;
        cout<<"Enter any key _:";
        int key;
        cin>>key;
        switch(key)
        {

        case 1:
        {
            int num,press;
            cout<<"ENTER NUMBER TO INSERT "<<endl;
            cin>>num;
            cout<<"PRESS 1 TO INSERT AT HEAD\n"
                "PRESS 2 TO INSERT AT LAST\n"
                "PRESS 3 TO INSERT AT IN BETWEEN"<<endl;
            cin>>press;
            if(press==1)
            {
                obj.insertAtHead(num);
                cout<<"INSERT SUCCESSFULLY...!"<<endl;
            }

            if(press==2)
            {
                obj.insertAtLast(num);
                cout<<"INSERT SUCCESSFULLY...!"<<endl;
            }

            if(press==3)
            {
                int i,J;
                cout<<"ENTER VALUE YOU WANT TO INSERT NODE AFTER "<<endl;
                cin>>i;
//                cout<<"ENTER NEW NODE VALUE :"<<endl;
//                cin>>J;

                obj.insertAfterNode(i,num);
                cout<<"INSERT SUCCESSFULLY...!"<<endl;
            }

            break;
        }
        case 2:
        {
            int oldval,newval;
            cout<<"Enter Value which you want to update?"<<endl;
            cin>>oldval;
            cout<<"Enter New which Value"<<endl;
            cin>>newval;

            obj.Update(oldval,newval);
            cout<<"Value Updated"<<endl;
            break;

        }
        case 3:
        {

            int press;
            system("CLS");
            cout<<"PRESS 1 TO DELETE DATA AT FIRST\n"
                "PRESS 2 TO DELETE DATA AT LAST\n"
                "PRESS 3 TO DELETE DATA SPECIFIC DATA"<<endl;
            cin>>press;
            if(press==1)
            {
                obj.deleteAtHead();
            }
            if(press==2)
            {
                obj.deleteAtLast();
            }
            if(press ==3)
            {
                int i;
                cout<<"ENTER VALUE YOU WANT TO DELETE DATA"<<endl;
                cin>>i;
                obj.deleteSpecificNode(i);
            }
            break;
        }
        case 4:
            {
                int num;

                if(obj.isempty())
                {
                    cout<<"list is empty";
                }
                else
                {
                    cout<<"ENTER VALUE TO SEARCH: "<<endl;
                    cin>>num;
                    if(obj.Search(num)!=NULL)
                    cout<<"DATA FOUND :"<<obj.Search(num)->Getdata();
                    else
                        cout<<"NO NODE FOUND"<<endl;
                    break;
                }

            }
        case 5:
        {
            int num1 , num2;
            cout<<"ENTER NUMBER 1 :"<<endl;
            cin>>num1;
            cout<<"ENTER NUMBER 2 :"<<endl;
            cin>>num2;
            obj.swapNode(num1,num2);
            break;
        }
        case 6:
        {
            if(obj.isempty())
                cout<<"List is empty"<<endl;
            else
                cout<<"No list is not empty"<<endl;
            break;
        }
        case 7:
        {
            cout<<"List before reversing"<<endl;
            obj.display();

            cout<<"List after reversing elements"<<endl;
            obj.Reverse();      //calling reverse function to apply changes
            obj.display();      //displaying list
            break;
        }
        case 8:
            {
                cout<<"\n\nElements of list are: ";
                obj.display();
                break;
            }
        case 9:
            {
                return 0;
            }
        default:
            cout<<"PRESS VALID KEY"<<endl;
        }

    }










    return 0;
}
