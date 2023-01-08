#include<iostream>
using namespace std;

int fun(int *ptr1,int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
    return 0;
}

int main()
{
    // int x = 10, y = 20;

    // fun(&x,&y);

    // cout<<x<<"   "<<y;

    int x;
    int y = 10;

    int *ptr = &x;
    ptr = &y;

    cout<<*ptr;
}