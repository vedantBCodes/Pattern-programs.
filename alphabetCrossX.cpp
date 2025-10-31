/*
A     A
 B   B
  C C
   D
  C C
 B   B
A     A
*/

#include<iostream>
using namespace std;
 
void alphabetCrossX(int row)
{
    int total = 2 * row - 1 ;
    int start = 1;
    int end = total;
    char startChar = 'A';
    for(int i=1;i<=total;i++)
    {
        for(int j=1;j<=total;j++)
        {
            if(j==start || j==end)
            {
                cout<<startChar;
            }
            else 
            {
                cout<<" ";
            }
        }
        if(i<row)
        {
            start++;
            end--;
            startChar++;
        }
        else
        {
            start--;
            end++;
            startChar--;
        }
        cout<<endl;
    }
}

int main()
{
    alphabetCrossX(5);
   return 0;
}