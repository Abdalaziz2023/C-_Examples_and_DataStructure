#include<iostream>
using namespace std;

int maximum(int,int); // function prototype (declaration);

int main()
{
    cout<<maximum(10,20);
}

int maximum(int x,int y)
{
    return (x > y)? x : y;
}