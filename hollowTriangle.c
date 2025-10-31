#include<stdio.h>
#include<conio.h>

void hollowTriangle(int row)
{
     int i,j,k=row,x=0;
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=row;j++)
            {
                if(j==k)
                {
                    printf("* ");
                    k--;
                }
                else if(i==row)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            if(i>1)
         {
            for(int m=1;m<=row;m++)
            {
                if(m==x)
                {
                    printf("* ");
                }
                else if(i==row)
                {
                    if(m<row)
                    {
                     printf("* ");
                    }
                }
                else
                {
                    printf("  ");
                }
            }
         }
            printf("\n");
            x++;
        }
    }
void hollowTriangle2(int row)  //Better Approach
{
  int col = (2 * row) - 1;
  int left = row;
  int right = row;
  for(int i=1;i<=row;i++)
  {
    for(int j=1;j<=col;j++)
    {
        if(j==left || j==right || i==row)
        {
            cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
     right++;
     left--;
    cout<<endl;
  }
}
    int main()
    {
         int row=10
        hollowTriangle(row);
        hollowTriangle2(row);
    }
