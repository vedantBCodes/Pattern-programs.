/*

        * * * * *
       * * * * *
      * * * * *
    * * * * *
   * * * * *

*/

#include<iostream>
using namespace std;
 
void rhombusPattern(int row)
{
    int col=row*2;
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(j<=(row-i))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        col--;
        cout<<endl;
    }
}

int main()
{
    int row=5;
    rhombusPattern(row);
   return 0;
}