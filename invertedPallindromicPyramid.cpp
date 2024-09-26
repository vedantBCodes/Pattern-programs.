/*
--->Inverted Pyramid Pattern Using Numbers

      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

*/
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=4;i++)
    {
        bool check=false;
        int x=i-1;
        for(int j=i;j<=3;j++)
        {
            cout<<"  ";
        }
        int y=(i*2)-1;
        for(int k=1;k<=y;k++)
        {
            if(x<y && check==false)
            {
                x++;
                cout<<x<<" ";
            }
            else
            {
                check=true;
            }
            if(check==true)
            {
                x--;
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}