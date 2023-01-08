/*C++ program to raise any number x to power n*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int x,n,result;
    cout<<"Enter number: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>n;
    result = pow(x,n);

    cout<<x<<" ^ "<<n<<" = "<<result;
}