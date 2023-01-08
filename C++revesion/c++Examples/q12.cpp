#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter year :: ";
    int year;
    cin>>year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout<<"Entered year is leap year";
        }
        
    }
    else if (year % 4 == 0)
    {
        cout<<"Entered year is leap year";
    }
    else
        cout<<"Entered year is not leap year";
    
    
}