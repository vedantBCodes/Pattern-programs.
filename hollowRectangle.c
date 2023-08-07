#include<stdio.h>
#include<conio.h>
int main() //Printing hollow rectangle pattern
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i==1)||(i==4)||(j==1)||(j==5)) //(i,j) co-ordinates  OR  if(((i==2)||(i==3))&&((j==2)||(j==3)||(j==4)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*Output:-
* * * * *
*       *
*       *
* * * * *
*/
