#include<iostream>
using namespace std;
 
void halfSolidTriangle(int num)
{
    for(int i=1;i<num;i++)
    {
        for(int j=1;j<num;j++)
        {
            if(j<=(num-i))
            {
                cout<<"   ";
            }
            else
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter the number of rows:";
    cin>>num;
    halfSolidTriangle(num);
   return 0;
}