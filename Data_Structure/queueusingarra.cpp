#include<iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *items;
public:
    Queue(int sizeofqueue){front = -1; rear = -1; size = sizeofqueue; items = new int[size];};

    bool empty()
    {
        return front == -1 && rear == -1;
    }

    bool fill()
    {
        return rear == size -1;
    }
    //=========== Enqueue()

    void Enqueue(int item)
    {
        if (empty())
        {
            front++;
            rear++;
            items[rear] = item;
        }
        else if(! fill())
        {
            rear++;
            items[rear] = item;
        }
        else
        {
            cout<<"queue is fill";
        }
    }

    int  Dequeue()
    {   int result;
        if (empty())
        {
            cout<<"Queue is empty";
        }
        else
        {
            result = items[front];
            front++;
            return result;

        }
    }

    void Display()
    {
        if (empty())
        {
            cout<<"queue is empty";
        }
        else
        {
            for (int i = 0; i <= rear; i++)
            {
                cout<<items[i];
            }
        }
    }

};

int main()
{
    Queue q1(5);
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    

    cout<<q1.Dequeue()<<"\t";
    cout<<q1.Dequeue()<<"\t";
    cout<<q1.Dequeue()<<"\t";
}


