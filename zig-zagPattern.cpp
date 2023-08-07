/*

    *       *       *       *
  *   *   *   *   *   *   *   *
*       *       *       *       *

*/

#include<iostream>
using namespace std;
 
void zigZagPattern(int num)
{
    int cnt=0;
   for(int i=1;i<=3;i++)
   {
    for(int j=1;j<num;j++)
    {
        if((i+j)%4==0  || (i==2  && j%4==0))
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
   }
}

int main()
{
    int num=10;
    zigZagPattern(num);
   return 0;
}