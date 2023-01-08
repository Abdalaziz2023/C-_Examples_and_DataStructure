#include<iostream>
using namespace std;

class Array
{
    int size;
    int length;
    int *array;

    public:
    // parameterized constractor
    Array(int sizeofarray)
    {
        size = sizeofarray;
        array = new int[size];
        length = 0;
    }

    // array is empty
    bool isempty()
    {
        return length == 0;
    }

    // array is full
    bool isfull()
    {
        return length == size-1;
    }

    //============= operations =============
    // ============ Fill ===========
    void fill()
    {
        if (isfull())
        {
            cout<<"array is full";
        }
        else
        {
            cout<<"How many items you need to fill: ";
            int number;
            cin>>number;

            if (number < size)
            {
                int num;
                for (int i = 0; i < number; i++)
                {
                    cout<<"Enter number: ";
                    cin>>num;

                    array[i] = num;

                    length++;
                }
                
            }
            else
            {
                cout<<"number of items is not valid";
            }
            
        }
        
    }

    //============== insert in specified index

    void insert(int index,int newitem)
    {
        if (isfull())
        {
            cout<<"array is full";
        }
        else if (index > size || index < 0)
        {
            cout<<"index is out of range";
        }
        else
        {
            for (int i = length; i > index; i--)
            {
                array[i] = array[i-1];
            }

            array[index] = newitem;
            length++;
        }
        
    }

    //=========== append()
    void append(int newitem)
    {
        if (isfull())
        {
            cout<<"array is full";
        }
        else
        {
            array[length] = newitem;
            length++;

        }
    }

    //=========== seatch()

    int search(int key)
    {
        int index = -1;
        for (int i = 0; i <= length; i++)
        {
            if (key == array[i])
            {
                index = i;
                break;
            }
            
        }
        return index;
    }

    //========= delete()

    void Delete(int key)
    {
        int index = search(key);
        if (index == -1)
        {
            cout<<"key is not found";
        }
        else
        {
            for (int i = index; i < length; i++)
            {
                array[i] = array[i+1];
            }
            length--;   
        }
    }

    //============== display()

    void Display()
    {
        if (isempty())
        {
            cout<<"array is empty";
        }
        else
        {
            for (int i = 0; i < length; i++)
            {
                cout<<array[i]<<'\t';
            }
        }
        
    }

    //============= length()

    int getlenght()
    {
        return length;
    }

    //============ insertion sort()

    int insertionsort()
    {
        int key,j;
        for (int i = 1; i < length; i++)
        {
            key = array[i];
            j = i-1;

            while (j>=0 && key < array[j])
            {
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = key;
        }

        return *array;
        
    }

    //============= BinarySearch()


};

int main()
{
    Array A1(10);
    // A1.fill();
    // A1.Display();
    // A1.append(15);
    // A1.insert(2,15);
    // A1.Display();
    // A1.Delete(15);
    // cout<<'\n';
    // A1.Display();

    A1.append(12);
    A1.append(-55);
    A1.append(1);
    A1.append(90);
    A1.append(-1);
    A1.append(15);
    //A1.append5(10);
    //A1.insert(2,22);
    A1.insertionsort();
    A1.Display();
}