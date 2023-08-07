/*
        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 

*/

#include<iostream>
using namespace std;

void pallindromicPattern(int row)
{
   for(int i=1;i<=row;i++)
   {
    int num=i;
    for(int j=i;j<=(row-1);j++)
    {
        cout<<"  ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<num<<" ";
        num--;
    }
    num++;
    for(int j=1;j<i;j++)
    {
        num++;
        cout<<num<<" ";
    }
    cout<<endl;
   }
}

int main()
{
    int row=5;
    pallindromicPattern(row);
   return 0;
}