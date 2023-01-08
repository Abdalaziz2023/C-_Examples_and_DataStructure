#include<iostream>
using namespace std;

#define CUBE(x) (x*x*x)

int main()
{
    int n, cube;

    cout<<"Enter number :: ";
    cin>>n;

    cube = CUBE(n);

    cout<<"The cube = "<<cube;
}