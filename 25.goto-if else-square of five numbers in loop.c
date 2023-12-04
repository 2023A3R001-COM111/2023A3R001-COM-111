#include<stdio.h>
#include<math.h>
int main ()
{
double a,b;
int count =1;
printf("Enter FIVE real values in a LINE\n");

read:
    scanf("%lf", &a);

    if (a<0)
    {
        printf("Value - %d is negative\n",count);
    }
    else
    {
        b=sqrt(a);
        printf("%lf %lf\n", a , b);
    }
        count = count + 1 ;
        if (count<=5)
        {

        goto read;
        }
    printf("End of computation\n");
    return 0;
}










