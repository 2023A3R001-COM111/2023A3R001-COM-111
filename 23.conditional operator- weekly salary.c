#include<stdio.h>
int main()
{
    int a;
    double weeklysalary;

    printf("enter the number of products sold in a week: ");
    scanf("%d", &a);

    weeklysalary=(a<40)?(4*a+100):((a==40)?300:(4.5*a+150));

    printf("weekly salary: %.2f\n", weeklysalary);

    return 0;
}