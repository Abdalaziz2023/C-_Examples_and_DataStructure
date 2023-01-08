/* C++ program to check given number is prime number or not*/
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number :: ",
    cin>>n;

    if (n == 1)
    {
        cout<<"number "<<n<<" is a prime number";
    }
    else
    {
        bool flag = true;
        for (int i = 2; i <n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout<<"number "<<n<<" is prime number";
        }
        else
        {
            cout<<"numbr "<<n<<" is not prime number";
        }
    }
    
}