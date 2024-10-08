/*
Print the following pattern for the given number of rows.
Assume N is always odd.
Note : There is space after every star.

Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Sample Input : 11
Sample Output :
*
 * *
   * * *
     * * * *
       * * * * *
         * * * * * *
       * * * * *
     * * * *
   * * *
 * *
*

*/
#include<iostream>
using namespace std;
 
void arrowOfStars(int num)
{
    for(int i=1;i<=(num/2+1);i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=(num/2);i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void arrowOfStars2(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if((j>=i && j<(i*2) && i<=(num/2+1)) || (j>(num-i) && j<=(num-i)*2) && i>(num/2+1))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    int num=11;
    // cout<<"Enter the number of rows : ";
    // cin>>num;
    arrowOfStars(num);
  cout<<endl;
  arrowOfStars2(num);
   return 0;
}
