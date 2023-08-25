/*

Print the following pattern for the given number of rows.

Pattern for N = 5

E
DE
CDE
BCDE
ABCDE

Input format : N (Total no. of rows)
Output format : Pattern in N lines
*/

#include <iostream>
using namespace std;

void alphabetPattern(int x) 
{
    char ch=char(64+x);   //Type casting
    for(int i=1;i<=x;i++)
    {
        int y=65+x-i;
        for(int j=1;j<=i;j++)
        {
            cout<<char(y);
            y++;
        }
         cout<<endl;
    }
   
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    alphabetPattern(x);
    return 0;
}