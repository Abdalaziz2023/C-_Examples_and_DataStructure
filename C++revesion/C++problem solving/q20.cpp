#include<iostream>
using namespace std;
void evenOrodd(int);

int main()
{
    int num = 15;
    evenOrodd(num);
}

void evenOrodd(int num)
{
    (num%2 == 0)?cout<<"number is even" : cout<<"numbre is odd";
}