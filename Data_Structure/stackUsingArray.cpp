#include<iostream>
using namespace std;

class Stack
{
    
    public:
    int top,size;
    int *items;
    Stack(int sizeofstack)
    {
        top = -1;
        size = sizeofstack;
        items = new int[size];
    }
    // empty
    bool empty()
    {
        return top == -1;
    }

    // isFull
    bool isfull()
    {
        return top > size-1;
    }

    //=================== push()

    void push(int data)
    {
        if (isfull())
        {
            cout<<"Stack overflow";
        }
        else
        {
            top++;
            items[top] = data;
        }
    }

    //============== pop()
    void pop()
    {
        if (empty())
        {
            cout<<"stack underflow";
        }
        else
        {
            top--;
        }
    }
    //=============== Display()

    void Display()
    {
        if (empty())
        {
            cout<<"stack underflow";
        }
        else
        {
            for (int i = 0; i < top; i++)
            {
                cout<<items[i]<<"\t";
            }
        }
    }

    //============== top()
    int Top()
    {
        return items[top];
    }
    //============= 
};

int main()
{
    Stack S1(10);
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.push(5);
    S1.pop();
    S1.pop();
    S1.Display();
}