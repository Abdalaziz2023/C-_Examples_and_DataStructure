/*Find Fibonacci series*/

#include<iostream>
using namespace std;

int Fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return Fibo(n - 2) + Fibo(n - 1);
    }
}

void Fibo_iterative(int n)
{
    if (n == 1)
    {
        cout<<1;
    }
    else if (n > 1)
    {    
        int f1 = 0;
        int f2 = 1;
        int temp;
        while (n > 1)
        {
            cout<<f2<<" ";
            temp = f2;
            f2 = f1 + f2;
            f1 = temp;
            n--;
        }

    }
    else
    {
        cout<<0;
    }
}



int main()
{
    // for (int i = 1; i < 10; i++)
    // {
    //     cout<<Fibo(i)<<" ";
    // }


    Fibo_iterative(10);
}