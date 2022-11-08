#include <iostream>
using namespace std;
class node 
{
    int data;
    node *next;
};
class linked list 
{
    node * head ;
    linked_list()
    {
        head = NULL ;
    }
    bool IsEmpty()
    {
       return (head == NULL);
    }
    void insertFirst(int i)
    {
     node *temp = new node();
     temp->data = i;
        
        if(IsEmpty())
        {
            temp ->next = NULL;
            head = temp;
        }
        else
        {
            temp ->next = head;
            head = tamp;
        }

    }
    void insertBefor(int item , int i)
    {
        if(IsFound())
        {
            node *temp = new node();
            temp->data = i ;
            node *Temp = head;

        }
        while (Temp !=NULL && Temp->new->data != item)
        {
           Temp = Temp->next
        }
        temp->next = Temp->next;
        Temp->next = temp;
        

    }
    else
    {
        cout<<"item not found"<<endl;

    }
};

int main ()
{
    linked_list a;
    a.insertFirst(1);
    a.insertFrist(2)
    return 0;


};
