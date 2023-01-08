/*C++ program to generate random numbers between 0 and 100*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int num;

    for (int i = 0; i < 10; i++)
    {
        num = rand()%100; //get random number 
        cout<<num<<endl;
    }
    
}

