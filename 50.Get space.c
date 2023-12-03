#include<stdio.h>
int main ()
{
    int space,rows,p,q;
    printf("Enter the number of rows : \n");
    scanf("%d", &rows );
    {
        for(i=1;p<=rows;p++)
        {
        for(space=1; space<=rows-p;space++)
        {
            printf(" ");
        }
        for (q=1;q<=2*i-1;q++)
        {
            printf("*");
        }
        printf("\n");
        }
    }
    return 0;


}