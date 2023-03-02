/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j>0;j--)
          {
             printf("%d ",j);
          }
             printf("\n");
    }
}
