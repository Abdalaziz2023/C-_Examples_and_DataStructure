/*C++ program to swap Two Numbers without using third variable*/

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first number ::";
    cin>>a;
    cout<<"Enter second number ::";
    cin>>b;
    cout<<"\n Before swapping, Number are :: "<<endl;
    cout<<"\n\t a = "<<a<<", b = "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\n After swapping, Numbers are ::"<<endl;
    cout<<"\n\t a = "<<a<<", b = "<<b<<endl;

    return 0; 
}