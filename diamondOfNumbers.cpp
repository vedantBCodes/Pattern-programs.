/*
Print the following pattern for the given number of rows.

Pattern for N = 7
    1
   123
  12345
 1234567
  12345
   123
    1

Input format : N (Total no. of rows)
Output format : Pattern in N lines

Sample Input : 5
Sample Output :
   1
  123
 12345
  123
   1

*/

#include<iostream>
using namespace std;

void diamondOfNumbers(int x)   // Worst approach
{
    int z=1;
   for(int i=1;i<=(x/2+1);i++)
   {
    int num=1;
    for(int j=x/2;j>=i;j--)
   {
      cout<<" ";
   }
    for(int k=1;k<=z;k++)
   {
    cout<<num;
    num++;
   }
   cout<<endl;
   z=z+2;
   }


   z=z-3;
   for(int i=1;i<=x/2;i++)
   {
    int num=1;
    for(int j=1;j<=i;j++)
    {
        cout<<" ";
    }
    for(int k=1;k<z;k++)
    {
        cout<<num;
        num++;
    }
    z=z-2;
    cout<<endl;
   }
}
 
int main()
{
    int num;
    cout<<"Enter the odd number of rows : ";
    cin>>num;
    if(num%2==0)
    {
        num++;
    }
    diamondOfNumbers(num);
   return 0;
}