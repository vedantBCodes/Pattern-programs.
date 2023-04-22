#include<stdio.h>
#include<conio.h>
void hollowTriangle()
{
     int i,j,k=5,x=0;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j==k)
                {
                    printf("* ");
                    k--;
                }
                else if(i==5)
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
            for(int m=1;m<=5;m++)
            {
                if(m==x)
                {
                    printf("* ");
                }
                else if(i==5)
                {
                    if(m<5)
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
    int main()
    {
        hollowTriangle();
    }
