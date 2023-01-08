#include<iostream>

using namespace std;
void Swap(int *x,int *h)
{
        int *temp = h;
        h = x;
        x = temp;
};

int main()
{
    int x = 10;
    int y = 11;

    int temp = x;
    x = temp;
    x = y;
    y = temp;

    cout<<x<<endl;
    cout<<y<<endl;
}