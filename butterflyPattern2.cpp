/*

 *                          * 
 *  *                    *  * 
 *  *  *              *  *  * 
 *  *  *  *        *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *        *  *  *  * 
 *  *  *              *  *  * 
 *  *                    *  * 
 *                          * 
 
*/

#include<iostream>
using namespace std;
 
void butterflyPattern(int row)
{
    for(int i=1;i<=row/2;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        int spaces=row-(2*i);
        for(int j=1;j<=spaces;j++)
        {
            cout<<"   ";
        }
         for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=row/2;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        int spaces=row-(2*i);
        for(int j=1;j<=spaces;j++)
        {
            cout<<"   ";
        }
         for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

 void butterflyPattern2(int row)
 {
     int col=row;
     for(int i=1;i<=row;i++)
     {
         for(int j=1;j<=col;j++)
         {
             if((j>=1 && j<=i && i<=row/2) || (j>(row-i) && j<=row && i<=row/2) ||
             (j>=1 && j<=(row-i)+1 && i>row/2) || (j>=i && j<=row && i>row/2))
             {
                 cout<<"* ";
             }
             else
             {
                 cout<<"  ";
             }
         }
         cout<<"\n";
     }
 }

int main()
{
    int row=10;
    butterflyPattern(row);
    cout<<endl;
    butterflyPattern2(row);
   return 0;
}
