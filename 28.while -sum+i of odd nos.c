#include<stdio.h>
int main()
{
    int sum,X;
    X=1;
    sum=0;
    do
    {
        sum=sum +X;
        X=X+2;
    }
    while(sum<40 && X<10);
    printf("%d %d\n", X,sum);

    return 0;
}

