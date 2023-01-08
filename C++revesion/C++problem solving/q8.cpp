#include<iostream>
using namespace std;

int main()
{
    int score;
    cout<<"Enter score: ";
    cin>>score;
    switch (score / 10)
    {
    case 9:cout<<"A";break;
    case 8:cout<<"B";break;
    case 7:cout<<"C";break;
    case 6:cout<<"D";break;
    case 5:cout<<"F";break;
    case 4:cout<<"G";break;
    case 3:cout<<"H";break;
    case 2:cout<<"I";break;
    case 1:cout<<"K";break;
    
    default:cout<<"Error: score is out of range";break;
    }
}