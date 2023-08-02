/*

* 
* * 
*   * 
*     * 
*       * 
*         * 
*           * 
*             * 
*               * 
* * * * * * * * * * 

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
  int rows;
  cout<<"Enter the number of rows:";
  cin>>rows;
  hollowRightAngleTriangle(rows);
  return 0;
}
