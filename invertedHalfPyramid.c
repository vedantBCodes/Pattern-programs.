#include<stdio.h>
#include<conio.h>
int main() //Printing inverted half pyramid
{
    int i,j;
    //Method-1
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
//There is One another way for printing the same pattern
    //Method-2
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*Output:-
* * * * *
* * * *
* * *
* *
*
*/
