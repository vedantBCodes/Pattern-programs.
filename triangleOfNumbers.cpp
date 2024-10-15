/*
Print the following pattern for the given number of rows.
Pattern for N = 3
       1
     232
   34543

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Sample Input : 5
Sample Output :
           1
         232
       34543
     4567654
   567898765
*/
#include<iostream>
using namespace std;
 
void triangleOfNumbers(int num)
{
    int x=1;
    for(int i=1;i<=num;i++)
    {
        int y=i;
        for(int j=num*2;j>x;j--)
        {
             cout<<" ";
        }
            while(y<x)
            {
                cout<<y;
                y++;
            }
            while(y>=i)
            {
                cout<<y;
                y--;
            }
        x=x+2;
        cout<<endl;
    }
}

void triangleOfNumbers(int row)   //Better approach
{
    int col=row*2-1;
    int temp=col;
   
    for(int i=1;i<=row;i++)
    {
        int temp2=i;
        for(int j=1;j<=col;j++)
        {
            if(j>=temp && j<=col && j<col+1-i)
            {
                       cout<<temp2;
                      temp2++;
             }
             else if(j>=temp && j<=col && j>=col+1-i)
            {
                    cout<<temp2;
                    temp2--;
            }
            else
            {
                cout<<" ";
            }
        }
        temp-=2;
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter the number of rows : ";
    cin>>num;
    triangleOfNumbers(num);
   return 0;
}
