/*
     *
    * *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *
*/
#include <iostream>
using namespace std;

void hollowDiamond(int size)
{
    int x,y,z;
    x=y=z=((size/2)+1);
   for(int i=1;i<=size;i++)
   {
       for(int j=1;j<=size;j++)
       {
           if(j==x || j==y)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
       if(i<z)
       {
           x--;
           y++;
       }
       else
       {
           x++;
           y--;
       }
       cout<<endl;
   }
}
int main() {
    int size=10;
    if(size%2==0)
    {
        size++;
    }
    hollowDiamond(size);
    return 0;
}