/*find the number of digit of any number*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number :: ";
    cin>>n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n /=10;
    }
    cout<<"number of digits :: "<<count<<endl;
    
}