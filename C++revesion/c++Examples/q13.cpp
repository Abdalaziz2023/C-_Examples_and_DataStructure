/* get all root of equation*/

#include<iostream>
#include<math.h>

using namespace std;

void general_law(float a, float b, float c)
{
    float real_part , imagin_part, determin;
    float temp;

    real_part = - b / (2 * a);
    temp = real_part;
    determin = b * b - 4 * a * c;

    if (determin >= 0)
    {
        
        imagin_part = sqrt(determin) /(2 * a);
        real_part += imagin_part;
        cout<<"root1 = "<<real_part<<endl;
        temp -= imagin_part;
        cout<<"root2 = "<<temp<<endl;
    }
    else if (determin < 0)
    {
        imagin_part = sqrt(abs(determin)) / (2 *a);
        cout<<"root1 = "<<real_part << "+" <<"j"<<imagin_part<<endl;
        cout<<"root2 = "<<real_part << "-" <<"j"<<imagin_part<<endl;

    }
    
    
}

int main()
{
    general_law(4,5,1);
}