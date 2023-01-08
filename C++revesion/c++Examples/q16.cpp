/*
C++ Program to find Factorial of a Number using Recursion and Loop
*/

#include<iostream>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std :: chrono;

long double Factorial_Recursion(long double n)
{
    if (n == 1)
    {
        return 1;
    }
    else 
    {
        return(n * Factorial_Recursion(n-1));
    }
    
}

long double Factorial_iterative(int n)
{
    long double f = 1;
    if (n == 1 or n == 0)
    {
        return 1;
    }
    else
    {
        while (n >= 1)
        {
            f *=n;
            n--;
        }

        return f;
    }
    
}


int main()
{
    auto start = high_resolution_clock :: now();
    cout<<"factorial using Recursion ::  "<<Factorial_iterative(1000)<<endl;
    auto stop = high_resolution_clock :: now();

    auto duration = duration_cast<microseconds>(stop - start);

    // cout<<"factorial using Iteration ::  "<<Factorial_iterative(20)<<endl;

    cout<<"Time taken by function: "<<duration.count()<<" microseconds" <<endl;
}