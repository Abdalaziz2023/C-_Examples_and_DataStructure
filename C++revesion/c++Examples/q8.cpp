/*
Write a program to calculate compound interset
It is the addition of interest to the principal sum of a loan or deposit, or in other words, interest on interest. It is the result of reinvesting interest, rather than paying it out, so that interest in the next period is then earned on the principal sum plus previously-accumulated interest.

It may be contrasted with simple interest, where interest is not added to the principal, so there is no compounding.

Annual compound interset formula
The formula annual compound interset, including principal sum, is:

A = P (1+r/n)^(nt)

A = the future value of the investment / loan, including interset
P = the princple investment amount(the intial deposit or loan amount)
r = the annaul interset rate (decimal)
n = the number of times that interset is compounded per year
t = the number of years the money is invested or borrowed for 

*/
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float p,t,r,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"Enter Rate of Interset :: ";
    cin>>r;
    cout<<"Enter Time Period :: ";
    cin>>t;

    ci = p * pow((1+ r / 100),t);

    cout<<"\n The Calculated Compound Interset is  = "<<ci<<"\n";
    return 1;
}