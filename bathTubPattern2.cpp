#include<iostream>
using namespace std;
 
void bathTubPattern(int row)
{
    for(int i=1;i<=row/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        int spaces=row-(2*i);
        for(int j=1;j<=spaces;j++)
        {
            cout<<"   ";
        }
         for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int row=10;
    bathTubPattern(row);
   return 0;
}