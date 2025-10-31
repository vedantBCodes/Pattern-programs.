/*
    1
   2 2
  3   3
 4     4
5 5 5 5 5

*/

#include<iostream>
using namespace std;
 
void hollowNumberPyramid(int row)
{
    int col = 2 * row -1;
    int start=row;
    int end=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j==start || j==end)
            {
                cout<<i;
            }
            else if(i==row && j%2==1)
            {
                cout<<i;
            }
            else
            {
                cout<<" ";
            }
        }
        start--;
        end++;
             cout<<endl;
    }
}
int main()
{
    hollowNumberPyramid(9);
   return 0;
}