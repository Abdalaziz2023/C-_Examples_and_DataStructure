#include<iostream>

int main()
{
    int n, f = 1;
    std :: cin>>n;
    do{
        f = f *n;
        n = n -1;
    }while (n > 1);
    std:: cout<<f<<"\n";
}