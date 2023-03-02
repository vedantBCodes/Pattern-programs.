#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=6;i++)
    {
        for(j=k;j<=12;j++)
        {
            printf("* ");
        }
           printf("\n");
           k=k+2;
    }
}
