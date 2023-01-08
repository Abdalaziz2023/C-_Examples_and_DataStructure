#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int item) {
        data = item;
        next =NULL;
    }
};

class List
{
    public:
    Node* head;
    List()
    {
        head = NULL;
    }
    //============== empty()

    bool empty()
    {
        return head == NULL;
    }
    //============= insertFirst()

    void insertFirst(int item)
    {
        Node* newNode = new Node(item);
        if (empty())
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    //========= insertLast()

    void insertLast(int item)
    {
        Node *newNode = new Node(item);
        if (empty())
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;   
        }
    }
    //============== search()
    bool search(int item)
    {
        bool found = false;
        Node *temp = head;
        while (temp !=NULL)
        {
            if (temp->data == item)
            {
                found = true;
            }
            temp = temp->next;
        }
        return found;
        
    }

    void insertBefor(int postion,int item)
    {
        if (search(postion))
        {
            Node *temp = head;
            Node *newNode = new Node(item);
            while (temp->next->data != postion && temp != NULL)
            {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        else
        {
            cout<<"position is not found";
        }
    }
    //================ Delete()

    void Delete(int item)
    {
        if (search(item))
        {
            Node *delptr = head;
            Node *preve = NULL;
            if (head->data == item)
            {
                head = head->next;
                delete delptr;
            }
            else
            {
                while (delptr->data != item)
                {
                    preve = delptr;
                    delptr = delptr->next;
                }
                preve->next = delptr->next;
                delete delptr;
            }
            
        }
        else
        {
            cout<<"item is not found";
        }
        
            
    }

    void Display()
    {
        if (empty())
        {
            cout<<"list is empty underflow";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout<<temp->data<<" \t";
                temp = temp->next;
            }
        }
        
    }
};

int main()
{
    List L1;
    L1.insertLast(1);
    L1.insertLast(2);
    L1.insertLast(3);
    L1.insertLast(4);
    L1.insertLast(5);
    L1.insertLast(6);
    L1.insertLast(7);

    
    
    
    L1.Display();
    cout<<"\n";
    L1.Delete(1);
    L1.Display();
}