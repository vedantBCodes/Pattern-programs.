#include<stdio.h>
#include<conio.h>
int main() //Printing 0-1 Triangle
{  //Method-1
    int i,j,num=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num%2);
            num++;
        }
          printf("\n");
    }
    //Method-2
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0) //if the sum of the co-ordinates of i and j are even then print 1
            {
                printf("1 "); //else print 0
            }
            else
            {
                printf("0 ");
            }
        }
          printf("\n");
    }
}
/*Output:-
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/




