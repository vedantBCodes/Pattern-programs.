/*
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 
       * 
      * * 
     * * * 
    * * * * 
   * * * * * 

*/
#include<iostream>
using namespace std;

void sandGlass()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=10;k>i;k--)
        {
            cout<<"* ";
        }
        if(i==9)
        {
            break;
        }
        else
        {
        cout<<endl;
        }
    }
    for(int i=0;i<=10;i++)
    {
        for(int j=10;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main()
{
    sandGlass();
}