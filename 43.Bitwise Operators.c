#include<stdio.h>
int main()
{
//Demonstrating the working of bitwise operators 
     int x,y;
     printf("Enter two integers : ");
     scanf("%d %d",&x , &y);
     printf("The result of bitwise AND operator is x & y = %d\n", a&b);
     printf("The result of bitwise OR operator is  x | y = %d\n", x|y);
     printf("The result of bitwise XOR operator is  x ^ y = %d\n", x^y);
     printf(" ~x = %d\n", ~x);
     printf("~y = %d\n", ~y);
     printf("x <<1 = %d\n", x<<1);
     printf("y >>1 = %d\n", y>>1);
     return 0;
}