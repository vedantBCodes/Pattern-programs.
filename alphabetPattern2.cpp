/*

Example 1:

A
B C
C D E
D E F G
E F G H I

Example 2:

D
D C
D C B
D C B A

Example 3:

        A
       B C
      D E F
     G H I J
    K L M N O
*/
#include <iostream>
using namespace std;

void example1(int rows)
{
    int num=65;
    for(int i=1;i<=rows;i++)
    {
        int temp=num;
        for(int j=1;j<=i;j++)
        {
            cout<<char(temp)<<" ";
            temp++;
        }
        num++;
        cout<<endl;
    } 
}

void example2(int rows)
{
   int num =64+rows;
   for(int i=1;i<=rows;i++)
   {
      int temp=num;
      for(int j=1;j<=i;j++)
      {
         cout<<char(temp)<<" ";
         temp--;
      }
      cout<<endl;
}
}

void example3(int rows)
{
    int num=65;
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
}
int main() 
{
int rows=5;
cout<<"Example 1:"<<endl;
example1(rows);
cout<<endl<<"Example 2:"<<endl;
example2(rows);
cout<<endl<<"Example 3:"<<endl;
example3(rows);
}