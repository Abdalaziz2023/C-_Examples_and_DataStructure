/*C++ Program to convert Days into Years and  Weeks*/

#include<iostream>
using namespace std;

int main()
{
    int days,years,weeks;

    cout<<"Enter number of days: ";
    cin>>days;

    years = days / 365;
    days = days % 365;

    cout<<"Number of years = "<<years<<"  year and "<<days<<"  days"<<endl;
    weeks = days / 7;
    days = days % 7;

    cout<<"Number of weeks = "<<weeks<<"  weeks and "<<days<<"  days"<<endl;
}