#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b;

read:
    printf("Enter a non-negative number(or a negative number to exit): ");
    scanf("%f", &a);

    if (a<0)
        goto end;

        y=sqrt(a);
        printf("%f %f\n", a , b);
        goto read;
end:
    printf("Exiting the program.\n");
    return 0;
}










