/*
Print the following pattern for the given number of rows.
Pattern for N = 2

  0
 101
21012

Input format : N (Total no. of rows)
Output format : Pattern in N lines

Sample Input :6
Sample Output :

      0
     101
    21012
   3210123
  432101234
 54321012345
6543210123456

*/
#include <iostream>
using namespace std;

void mirrorImageOfTriangle1(int x)  //Best Approach
{
    for (int i = 0; i <= x; i++)
    {
        int cnt=i;
        for (int j = x; j >= i; j--)
        {
            cout << " ";
        }
        while(cnt>=0)
        {
            cout<<cnt;
            cnt--;
        }
        cnt=1;
        while(cnt<=i)
        {
            cout<<cnt;
            cnt++;
        }
        cout<<endl;
    }
}

void mirrorImageOfTriangle2(int x)   //Worst Approach
{
    for (int i = 0; i <= x; i++)
    {
        int m=i;
        for (int j = x; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <=i; k++)
        {
          cout<<m;
          m--;
        }
        int n=1;
        for(int l=0;l<i;l++)
        {
            cout<<n;
            n++;
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cout << "Enter the number of rows : ";
    cin >> x;
    mirrorImageOfTriangle1(x);
    return 0;
}