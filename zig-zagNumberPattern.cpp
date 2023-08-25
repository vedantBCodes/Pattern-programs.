/*

Print the following pattern for the given number of rows.

Pattern for N = 5
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15

Input format : N (Total no. of rows)
Output format : Pattern in N lines

*/
#include <iostream>
using namespace std;

void printLTR(int num,int x)  //LTR - left to right
{
    for(int i=1;i<=x;i++)
    {
        cout<<num<<"\t";
        num++;
    }
}

void printRTL(int num,int x)  //RTL - right to left
{
    for(int i=1;i<=x;i++)
    {
        cout<<num<<"\t";
        num--;
    }
}
void reverseNumberSeries(int x) 
{
    int num=1;
   for(int i=1;i<=x;i++)
   {
    if(i%2==1)
    {
       printLTR(num,i);
        num=num+(2*i);
    }
    else
    {
        printRTL(num,i);
        num++;
    }
    cout<<endl;
   }
}

int main()
{
    int x;
    cout << "Enter a number of rows : ";
    cin >> x;
    reverseNumberSeries(x);
    return 0;
}