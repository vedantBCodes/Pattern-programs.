/*

A       E
 B     D
  C   C
   D B
    E

*/
#include<iostream>
using namespace std ;

void zigZagAlphabetPattern(int row)
{
    int x=2*row-1;
    int start=65;
    int end= 64 + row;
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=2*row-1;j++)
    {
       if(j==i)
       {
        cout<<char(start);
        start++;
       }
       else if (j==x)
       {
        cout<<char(end);
        end--;
       }
       else
       {
        cout<<" ";
       }
    }
    x--;
    cout<<endl;
  }
}

int main()
{
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;
    zigZagAlphabetPattern(row); 
   return 0;
}