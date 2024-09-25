/*
--->Mirror Image Triangle Pattern

1 2 3 4 5 6 
 2 3 4 5 6 
  3 4 5 6 
   4 5 6 
    5 6 
     6 
    5 6 
   4 5 6 
  3 4 5 6 
 2 3 4 5 6 
1 2 3 4 5 6

*/
#include <iostream>
using namespace std;

void mirrorImageTrianglePattern(int size)
{
    int rows=(size*2)-1;
    int x=1;
  
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=x;j++)
        {
           cout<<"\t"; //Using '\t' to give the correct output for inputs of 2 digit number
        }       
        for(int j=x;j<=size;j++)
        {
            cout<<"\t"<<j<<"\t";
        }
        if(i<((rows/2)+1))
        {
            x++;
        }
        else
        {
            x--;
        }
        cout<<endl;
    }
}
int main() {
    int size=6; 
    mirrorImageTrianglePattern(size);
}