#include<stdio.h>
#include<conio.h>
int main() //Printing Floyd's Triangle
{
    int i,j,num=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d  ",num);
            num++;
        }
          printf("\n");
    }
}
/*Output:-
1
2    3
4    5    6
7    8    9   10
1112   13 14  15
*/



