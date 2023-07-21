#include<stdio.h>
int main()
{
    //BathTub pattern
    int x=8;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" * ");
        }
        for(int k=1;k<=x;k++)
        {
            printf("   ");
        }
        for(int l=1;l<=i;l++)
        {
            printf(" * ");
        }
        x=x-2;
        printf("\n");
    }
}