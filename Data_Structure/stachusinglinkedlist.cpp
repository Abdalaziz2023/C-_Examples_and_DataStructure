#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int item) {data = item; next = NULL;}

};

class stack
{
    private:
    Node *top;
    public:
    stack(){top = NULL;}

    //========= empty()
    bool empty(){return top == NULL;}
    //========= push()
    void push(int item)
    {
        Node *newNode = new Node(item);
        if (empty())
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }
    //========== pop()
    void pop()
    {
        if (empty())
        {
            cout<<"stack underflow";
        }
        else
        {
            Node *delptr = top;
            top = top->next;
            delete delptr;
        }
    }
    //========== Display()
    void Display()
    {
        if (empty())
        {
            cout<<"stack underflow";
        }
        else
        {
            Node *temp = top;
            while (temp != NULL)
            {
                cout<<temp->data<<"\n";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    stack S1;
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.Display();
    S1.pop();
    S1.Display();
}