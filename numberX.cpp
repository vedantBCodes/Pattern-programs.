/*
Print the following pattern for the given number of rows.

Pattern for N = 3 (No. of rows = 5, No. of columns = 5)
1   1
 2 2
  3
 2 2
1   1

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Sample Input : 5
Sample Output :
No. of rows = 9, No. of columns = 9

1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1

*/

#include<iostream>
using namespace std;

void numberX(int x)
{
    for(int i=1;i<=x-1;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(i<=x/2)
            {
            if(i==x/2 && j==x/2)
            {
                cout<<" "<<j;
                break;
            }
             else if((j==i)||(j==(x+1-i)))
             {
                cout<<i<<" ";
             }
             else
             {
                cout<<"  ";
             }
            }
            else
            {
                int y=x-i;
                if((j==x-i)||(j==(x-y)))
                {
                    cout<<(y)<<"   ";
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

 
int main()
{
    int num;
    cout<<"Enter the number of rows : ";
    cin>>num;
    numberX(num*2);
   return 0;
}