/*Write a C++ Program to Check Whether a character is Vowel or Consonant*/
// aeiuo

#include<iostream>
#include<string.h>
using namespace std;

bool isvowel(char c)
{
    if (c >= 97 and c <= 122)
    {
        return (c == 'a' || c == 'e' || c == 'i'|| c == 'u' || c == 'o');
    }
    else if (int(c) >= 65 and int(c) <= 90)
    {
        return (c == 'A' || c == 'E' || c == 'I'|| c == 'U' || c == 'O');
    }
    else
    {
        return false;
    }
    
    
}
int main()
{
    if (isvowel('x'))
    {
        cout<<"is velow";
    }
    else
    {
        cout<<"is not velow";
    }
    
}