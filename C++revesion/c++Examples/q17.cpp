#include<iostream>
using namespace std;
#include<math.h>

int number_of_digit(int n)
{
    int count = 0;
    int arr[10];
    int revers = 0;
    do
    {
        
        arr[count] = (n %10);
        count++;
    } while (n = n/10);

    int x = count;
    while (count >=1 )
    {
       

        revers += arr[count-1] * pow(10,x - count);
        count--;
        
    }

    return revers;
    
    
    
}

int number_reveres(int n)
{
    int no,rev = 0 ,r;

    no = n;
    while (no > 0)
    {
        r = no % 10;
        rev = rev *10 + r;
        no /=10;
    }

    return rev;
    
}

int main()
{
    cout<<number_of_digit(1555)<<endl;

    cout<<number_reveres(1555)<<endl;
}