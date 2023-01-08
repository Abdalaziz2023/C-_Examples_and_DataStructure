#include<iostream>

using namespace std;

#define EVEN_ODD(x) ((x % 2 == 0) ? cout<<"even": cout<<"odd")

int main()
{
    int num;
    cout<<"Enter number :: ";
    cin>>num;
    EVEN_ODD(num);
}