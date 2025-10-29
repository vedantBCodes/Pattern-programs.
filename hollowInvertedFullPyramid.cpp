/*
* * * * *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;
 
 void hollowInvertedFullPyramid(int n)
 {
    int col=n*2-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if((i==1 && j%2==1) || j==i || j==col+1-i)
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
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;
    hollowInvertedFullPyramid(row);
   return 0;
}
