#include<iostream>
using namespace std;
 
void solidTriangle(int row)
{
   for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(j<=(row-i))
            {
                cout<<"   ";
            }
            else
            {
                cout<<" *    ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;
    solidTriangle(row);
   return 0;
}