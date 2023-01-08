#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter three intergers: "<<endl;
    cin>>n1>>n2>>n3;

    int max = n1;
    if (n2 > max) max = n2;
    if (n3 > max) max = n3;
    cout<<"The Maximum number :"<<max<<endl;
}