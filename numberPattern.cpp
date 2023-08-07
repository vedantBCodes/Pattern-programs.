/*

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
*/
#include<iostream>
using namespace std;
 
void numberPattern(int row)
{
   for(int i=1;i<=row;i++)
   {
     int num=1;
     for(int j=1;j<=row;j++)
     {
        if(j<=row-i)
        {
            cout<<" ";
        }
        else
        {
            cout<<num<<" ";
            num++;
        }
     }
     cout<<endl;
   }
}

int main()
{
    int row=5;
    numberPattern(row);
   return 0;
}