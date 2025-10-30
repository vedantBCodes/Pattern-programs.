/*

Print the following pattern for the given number of rows.

Pattern for N = 5
5 5 5 5 5 
4 5 5 5 5
3 4 5 5 5
2 3 4 5 5
1 2 3 4 5

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

*/

#include<iostream>
using namespace std;

void numberPattern(int x)
{
    int y=x;
   for(int i=1;i<=x;i++)
   {
       for(int j=1;j<=x;)
       {
        while(y<x)
        {
            cout<<y<<" ";
            y++;
            j++;
        }
        cout<<x<<" ";
        j++;
       }
       y=y-i;
       cout<<endl;
   }
}

void numberPattern2(int row)  //Better Approach
{
  int num=1;
  for(int i=row;i>=1;i--)
  {
    int temp=i;
    for(int j=1;j<=row;j++)
    {
        if(j<=num)
        {
            cout<<temp<<" ";
            temp++;
        }
        else
        {
            cout<<row<<" ";
        }
    } 
    num++;
    cout<<endl;
  }
}
 
int main()
{
    int num;
    cout<<"Enter the number of rows : ";
    cin>>num;
    numberPattern(num);
   return 0;
}
