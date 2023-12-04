#include<stdio.h>
int main()
{
    int a;
    long long factorial=1;

    printf("enter the desired number: ");
    scanf("%d", &a);
    if(x<0)
    {
        printf("factorial is not defined for neagative integer.\n");
    }
    else
    {
        for(int n=1;n<=a;n++)
    {
        factorial*=n;
    }
    }
    printf("factorial of %d=%lld\n",a,factorial);

    return 0;
}