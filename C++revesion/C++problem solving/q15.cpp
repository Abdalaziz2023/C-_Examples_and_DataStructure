#include<iostream>
using namespace std;

int main()
{
//     int i = 0;
//  int A1[5] = {1,2,3,4,5};
//  while (i<5)
//  {
//     cout<<A1[i];
//     i++;
//  }

    // int x[] = {19,10,8,17,9,15};

    // cout<<sizeof(x) / sizeof(x[0]);  

    // int x[6] = {19,10,8};

    // int i =0;
    // while (i < 6)
    // {
    //     cout<<x[i];
    //     i++;
    // }
    
    // int array[10];
    // for(int i = 0; i < 10; i++)
    // {
    //     cout<<"Enter number:";
    //     cin>>array[i];
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<array[i];
    // }

    int test[3][2] = {{2,-5},{4,0},{9,1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"test["<<i<<"]["<<j<<"] = "<<test[i][j]<<endl;
        }
        
    }
    
    


    
}