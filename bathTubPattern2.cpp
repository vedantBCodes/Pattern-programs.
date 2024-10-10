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
void bathTubPattern2(int row)
{
    int col=row*2;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j>=1 && j<=i || j>(col-i) && j<=col)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int row=10;
    bathTubPattern(row);
    cout<<endl;
    bathTubPattern2(row);
   return 0;
}
