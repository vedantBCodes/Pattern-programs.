#include<stdio.h>
#include<conio.h>
int main() //Printing inverted half pyramid
{
    int i,j;
    //Method-1
    for(i=1;i<=5;i++)
    {
    for(j=4;j>=i;j--)
        {
            printf("  ");
        }
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
