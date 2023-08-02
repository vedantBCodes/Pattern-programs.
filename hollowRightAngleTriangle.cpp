/*

*
**
* *
*  *
*   *
*    *
*******

*/

#include<iostream>
using namespace std;
  
void hollowRightAngleTriangle(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
           
            if((j==1 || j==i || i==rows))
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
   hollowRightAngleTriangle(10);
   return 0;
}