#include<iostream>
using namespace std;


int main()
{
    int a,b,c;
    cout<<"Enter marks of three exams: ";
    cin>>a>>b>>c;

    if ((a >= 50 && b >= 50) || (a >= 50 && c >= 50) ||(b >= 50 && c >= 50)||(a >= 50 && (c >= 50)))
    {
        cout<<"pass";
    }
    else
    {
        cout<<"fail";
    }
}