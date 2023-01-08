#include<iostream>
#include<math.h>
using namespace std;
/*write a program to caculate sin, cos and tan for angles form 30 to 270 by sixthiy dgree and priod increment equal 15 degree*/
int main()
{
    float x,y,z,m;
    for (int i = 30; i <= 270; i = i +15)
    {
        m = i*3.14 / 180;
        x = sin(m);
        y = cos(m);
        z = tan(m);

        cout<< "sin("<<m<<") = "<<x<<endl;
        cout<< "cos("<<m<<") = "<<y<<endl;
        cout<< "tan("<<m<<") = "<<z<<endl;
    }
    
}
