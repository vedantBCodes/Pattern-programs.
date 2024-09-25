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

void hollowHourglassPattern(int n)
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
int main() {
    int n=10; //Here n is the number of stars in the first horizontal row;
    hollowHourglassPattern(n);
    return 0;
}