/*

Pattern-1  (1) Basic 0-1 Triangle

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Pattern-2  (2) Same Row Alternating 0-1

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

Pattern-3 (3) Checkerboard Pattern (Square)

1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1

Pattern-4 (4) Center Pyramid 0-1 Pattern

        1
      0 1 0
    1 0 1 0 1
  0 1 0 1 0 1 0
1 0 1 0 1 0 1 0 1

Pattern-5 (5) Hollow 0-1 Triangle

        1
      0   0
    1       1
  0           0
1 0 1 0 1 0 1 0 1

*/

#include<iostream>
using namespace std;

void pattern1(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j%2<<" ";
        }
        cout<<endl;
    }
}

void pattern2(int row)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j%2<<" ";
        }
        cout<<endl;
    }
}

void pattern3(int row)
{
    for(int i=1;i<=row;i++)
    {
        int num=i;
        for(int j=1;j<=row;j++)
        {
            cout<<num%2<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern4(int row)
{
    int x=row;
    int col=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j>=x)
            {
                cout<<j%2<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        x--;
        col++;
        cout<<endl;
    }
}

void pattern5(int row)
{
    int col=2*row-1;
    int mid=row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j==mid+1-i || j==mid-1+i || i==row)
            {
                cout<<j%2<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    pattern1(5);
    cout<<endl;
    pattern2(5);
    cout<<endl;
    pattern3(5);
    cout<<endl;
    pattern4(5);
    cout<<endl;
    pattern5(5);

    return 0;
}