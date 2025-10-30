#include<iostream>
using namespace std;
 
void diamondPattern(int row)
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
      for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        { 
                if(j<=i)
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

void diamondPattern2(int row)
{
    int col=row/2+1;
   for(int i=1;i<=row;i++)
   {
     for(int j=1;j<=col;j++)
     {
        if(((j>col-i) && i<=col) || ((i>col) && (j>i-col)) )
        {
            cout<<" *";
        }
        else
        {
            cout<<" ";
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
    diamondPattern(row); //Use odd numbers only
   return 0;
}
