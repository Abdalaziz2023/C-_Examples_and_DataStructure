#include<iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter char :: ";
    cin>>c;

    /*
    from 65 to 90 is a Upper case
    from 48 to 57 is a Digit
    from 97 to 122 is a Lowercase
    */

   if (c >= 65 and c <= 90)
   {
        cout<<"Entered char is Upper case";
   }
   else if (c >= 48 and c <= 57)
   {
        cout<<"Entered char is Digit";
   }
   else if (c >= 97 and c <= 122)
   {
        cout<<"Enter char is Lower Case";
   }
   else
   {
        cout<<"Entered char is Special Character";
   }   
}