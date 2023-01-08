#include<iostream>
using namespace std;

int main()
{
    int grade;
    cout<<"Enter the grade: ";
    cin>>grade;
    if (grade>=75)
    {
        cout<<'A';
    }
    else if (grade >=65)
    {
        cout<<'B';
    }
    else if(grade >= 55)
    {
        cout<<'C';
    }
    else if (grade >= 40)
    {
        cout<<'D';
    }
    else
    {
        cout<<"fail";
    }
}