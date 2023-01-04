#include "LinkedList.h"
#include "Node .h"
#include <iostream>
using namespace std;

int main()
{
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------DOUBLY LINKED LIST DATA STRUCTURE--------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    LinkedList obj;
    int key;
   while(1)
   {
       cout<<"\n\n||PRESS 1 TO INSERT AT FIRST     ||\n"
             "||PRESS 2 TO INSERT AT LAST      ||\n"
             "||PRESS 3 TO INSERT IN BETWEEN   ||\n"
             "||PRESS 4 TO DELETE AT FIRST     ||\n"
             "||PRESS 5 TO DELETE AT LAST      ||\n"
             "||PRESS 6 TO DELETE SPECIFIC NODE||\n"
             "||PRESS 7 TO SEARCH NODE ADDRESS ||\n"
             "||PRESS 8 TO UPDATE NODE ADDRESS ||\n"
             "||PERSS 9 TO DISPLAY NODE        ||\n"
             "||PRESS 10 TO EXIT()             ||\n"
             "||PRESS 11 TO CLEAR SCREEN       ||\n"<<endl;
       cout<<"------>"<<endl;
       cout<<"Enter any key _:";
       int key;
       cin>>key;
       switch(key)
       {
        case 1:
            {
                cout<<"ENTER DATA TO INSERT AT FIRST"<<endl;
                int data;
                cin>>data;
                obj.insertathead(data);

                cout<<"Node insert successfully"<<endl;
                break;
            }

        case 2:
            {
                cout<<"ENTER DATA TO INSERT AT LAST"<<endl;
                int data;
                cin>>data;
                obj.insertatlast(data);

                cout<<"Node insert successfully"<<endl;
                break;
            }
        case 3:
            {
                cout<<"ENTER NEW NODE DATA: "<<endl;
                int data , INDEX;
                cin>>data;
                cout<<"ENTER DATA OF NODE YOU WANT TO INSERT NEWNODE AFTER THIS"<<endl;
                cin>>INDEX;
                obj.insertafternode(INDEX,data);
                cout<<"Node insert successfully"<<endl;

                break;
            }
        case 4:
            {
                obj.deleteathead();

                cout<<"Node Deleted successfully"<<endl;
                break;
            }
        case 5:
            {
                obj.deleteatlast();
                cout<<"Node Deleted successfully"<<endl;
                break;
            }
        case 6:
            {
                cout<<"ENTER DATA TO DELETE THAT NODE "<<endl;
                int data;
                cin>>data;
                obj.deleteinbetween(data);
                cout<<"Node Deleted successfully"<<endl;
                break;
            }
        case 7:
            {
                cout<<"ENTER DATA TO SEARCH NODE ADDRESS "<<endl;
                int data;
                cin>>data;
                cout<<"NODE ADDRESS :"<<obj.Search(data)<<endl;
                cout<<"NODE DATA :"<<obj.Search(data)->Getdata();
                break;
            }
        case 8:
            {
                int oldVal, newVal;
                cout<<"ENTER VALUE TO UPDATE: "<<endl;
                cin>>oldVal;
                cout<<"ENTER NEW VALUE: "<<endl;
                cin>>newVal;

                obj.updatedataofnode(oldVal,newVal);
                break;
            }
        case 9:
            {
                cout<<endl<<endl;
                obj.display();
                break;
            }
        case 10:
            {
                return 0;
            }
        case 11:
            {
                system("CLS");
                break;
            }
        default:
            cout<<"PLZ PRESS VALID KEY (1 TO 9)"<<endl;

       }
   }

    return 0;
}
