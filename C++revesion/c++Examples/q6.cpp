#include<iostream>
using namespace std;

int main()

{
    int year,week,day,hour,minuit,second;

    cout<<"Enter numbr of days: ";
    cin>>day;

    year = day/ 365;
    day = day % 365;
    week = day / 7;
    day = day % 7;
    int day1 = day;
    hour = day / 24;
    minuit = (day % 24) / 60;
    second = minuit % 60;

    cout<<"have "<<year<<" years ,"<<week<<" week ,"<<day1<<" day"<< hour<<" hour, "<<minuit<<" min, "<<second<<"second"; 
}