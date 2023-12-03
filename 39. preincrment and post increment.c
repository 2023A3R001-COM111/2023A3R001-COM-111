#include<stdio.h>
int main ()
{
    int a=5,p,q;
    printf("%d\n",a);
    p=++a;
    printf("%d\n",a);
    q=a++;
    printf("%d\n", q);
    return 0;
}