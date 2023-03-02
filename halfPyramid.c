#include<stdio.h>
#include<conio.h>
int main() //Printing Half Pyramid pattern
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
          printf("\n");
    }
}
/*Output:-

*
* *
* * *
* * * *
* * * * *
*/

