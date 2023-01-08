#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int item){data = item;next = NULL;}
};

class Queue
{
    private:
    Node *front;
    Node *rear;
    public:
    Queue(){front = NULL; rear = NULL;}
    //============ empty()
    bool empty()
    {
        return rear == NULL;
    }
    //============ Enqueue()
    void Enqueue(int item)
    {
        Node* newNode = new Node(item);
        if (empty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = rear->next;
        }
    }

    //========= Display()
    void Display()
    {
        if (empty())
        {
            cout<<"Queue is empty";
        }
        else if(front== rear)
        {
            cout<<"queue is empty";
        }
        else
        {
            Node *temp = front;
            while (temp!= NULL)
            {
                cout<<temp->data;
                temp = temp->next;
            }
            
        }
        
    }

    //========= Dequeue()

    void Deqeue()
    {
        
        if (empty())
        {
            cout<<"queue is empty \n";
        }
        else
        {
            cout<<front->data;
            front = front->next;
        }
        
    }
};

int main()
{
    Queue Q1;
    Q1.Enqueue(1);
    Q1.Enqueue(2);
    Q1.Enqueue(3);
    //Q1.Display();
    Q1.Deqeue();
    cout<<"\n";
    Q1.Deqeue();
    cout<<"\n";
    Q1.Deqeue();
    cout<<"\n";
    Q1.Deqeue();
    cout<<"\n";
    Q1.Display();
    
}