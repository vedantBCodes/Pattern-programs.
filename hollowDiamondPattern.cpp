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

void hollowDiamond(int row)
{
  int half = row / 2 + 1;
  int left = half;
  int right = half;
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=row;j++)
    {
        if(j==left || j==right )
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    if(i<half)
    {
        right++;
        left--;
    }
    else
    {
        right--;
        left++;
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
