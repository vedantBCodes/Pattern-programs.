#include<iostream>
using namespace std;
 
void hollowRectangle(int row,int col)
{
    int i,j;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if((i==1)||(i==row) ||(j==1) ||(j==col))
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>col;
    hollowRectangle(row,col);
   return 0;
}