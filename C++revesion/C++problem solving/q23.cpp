#include<iostream>
using namespace std;

void fun(int,int,int);
void fun(double,int);
void fun(int,double);

int main()
{

    fun(1,2,3);
    fun(1.0,2);
    fun(2,10.0);
}

void fun(int n1,int n2,int n3)
{
    cout<<"version1"<<endl;
}

void fun(double n1,int n2)
{
    cout<<"version2"<<endl;
}
void fun(int n1,double n2)
{
    cout<<"version3"<<endl;
}