/*
--->Palindrome Triangle Pattern

          1 
        2 1 2 
      3 2 1 2 3 
    4 3 2 1 2 3 4 
  5 4 3 2 1 2 3 4 5 
6 5 4 3 2 1 2 3 4 5 6

*/
#include <iostream>
using namespace std;

void palindromeTrianglePattern(int size)
{
    for(int i=1;i<=size;i++)
    {
        bool check=false;
        for(int j=i;j<=size-1;j++)
        {
           cout<<"  ";
        }       
        int num=(i*2)-1;
        int x=i;
        for(int j=1;j<=num;j++)
        {
            if(x>1 && check!=true)
            {
                 cout<<x<<" ";
                 x--;
            }
            else
            {
                check=true;
                cout<<x<<" ";
                x++;
            }
        }
        cout<<endl;
    }
}
int main() {
    int size=8;    //Use  '\t' instead of space in cout if the number is 2 digit number 
    palindromeTrianglePattern(size);
}