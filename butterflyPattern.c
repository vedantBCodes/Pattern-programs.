#include<stdio.h>
#include<conio.h>
int main() //Butterfly_pattern program
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if((j>i)&&(j<=8-i))
                {
                printf("  ");
                }
                else
                {
                printf("* ");
                }
        }
        printf("\n");
    }
     for(i=4;i>=1;i--)
    {
        for(j=1;j<=8;j++)
        {
            if((j>i)&&(j<=8-i))
                {
                printf("  ");
                }
                else
                {
                printf("* ");
                }
        }
        printf("\n");
    }
}
/*
*              *
* *          * *
* * *      * * *
* * * * * * * *
* * * * * * * *
* * *      * * *
* *           * *
*                *
*/
