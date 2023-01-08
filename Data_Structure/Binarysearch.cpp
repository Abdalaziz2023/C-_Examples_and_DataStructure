#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low, int heigh, int key)
{
    int mid;
    while (low <= heigh)
    {
        mid  = low + (heigh - low) /2;

        if (arr[mid]  == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid+1;
        }
        else
        {
            heigh = mid -1;
        }
    }
    return -1;
    
}

int main()
{
    int arra[] = {1,2,3,4,5,6};

    int low = 0;
    int heigh = 6;
    int key = 3;

    if (BinarySearch(arra,low,heigh,key) !=-1 )
    {
        cout<<"item is found";
    }
    else
    {
        cout<<"item is not found";
    }
    
}