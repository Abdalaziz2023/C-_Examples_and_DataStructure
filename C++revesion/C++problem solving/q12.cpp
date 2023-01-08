#include<iostream>
using namespace std;

int main()
{
    int counter,grade,total,average;
    total = 0;
    counter = 1;
    while (counter <= 10)
    {
        cout<<"Enter grade: ";
        cin>>grade;
        total +=grade;
        counter++;
    }

    cout<<endl;
    average = total / 10;
    // continued
    cout<<"class average grade is: "<<average<<endl;

    return 0;
    
}

