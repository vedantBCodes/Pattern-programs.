#include<iostream>
using namespace std;
 
void butterflyPattern(int row)
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
    for(int i=row/2;i>=1;i--)
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
    butterflyPattern(row);
   return 0;
}