/*
---> Hollow Hourglass Pattern

* * * * * * 
 *       * 
  *     * 
   *   * 
    * * 
     * 
    * * 
   *   * 
  *     * 
 *       * 
* * * * * * 

*/
#include <iostream>
using namespace std;

void hollowHourglassPattern(int n)  //Bad approach
{
     int size=(n*2)-1; //Here size is the number of horizontal rows
    for(int i=1;i<=size;i++)
    {
        if(i<=n)
        {
        for(int j=1;j<i;j++)
            {
                cout<<" ";
            }
        for(int k=i;k<=n;k++)
        {
            if(i==1 || k==i || k==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        }
        else
        {
            for(int l=i;l<size;l++)
            {
                cout<<" ";
            }
            for(int m=n;m<=i;m++)
            {
                if(i==size || m==n || m==i)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}

void hollowHourglassPattern2(int row)  //Best approach
{
    int col=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if((i==1 && j%2==1) || (i==row && j%2==1)|| (i!=1 && j==i) || (i!=1 && j==col+1-i))
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
void hollowHourglassPattern3(int row)  //Another Best Approach
{
  int half = row / 2 + 1;
  int left = 1;
  int right = row;
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=row;j++)
    {
        if(j==left || j==right || i==1 || i==row)
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
        right--;
        left++;
    }
    else
    {
        right++;
        left--;
    }
    cout<<endl;
  }
}
int main() {
    int n=10; //Here n is the number of stars in the first horizontal row;
    hollowHourglassPattern(n);
    cout<<endl;
 if(n%2==0)
 {
  n++;
 }
    hollowHourglassPattern(n) //Here n is the number of rows in Hollow Hourglass Pattern and it should be an odd number
    return 0;
}
