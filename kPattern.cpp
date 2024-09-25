/*
---> k pattern

******
*****
****
***
**
*
**
***
****
*****
******

*/
#include <iostream>
using namespace std;

void kPattern(int size)
{
    int cols=(size/2)+1;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            cout<<"*";
        }
        if(i<((size/2)+1))
        {
            cols--;
        }
        else
        {
            cols++;
        }
        cout<<endl;
    }
}
int main() {
    int size=11; //Here size is nothing but the number of rows
    kPattern(size);

   
}