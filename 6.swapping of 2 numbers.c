// Swapping of two numbers
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the two numbers : \n");
    scanf("%d %d", &x, &y);
    printf("Before swapping X is : %d and Y is %d \n", a,b);
 
    // Swapping without using a third variable
    // Sum of both numbers is stored in 'a'
    x = x + y;
    // Difference of sum and original 'y' is stored in 'y'
    y = x - y;
    // Difference of sum and new 'y' is stored in 'x'
    x = x - y;
 
    printf("After swapping X is : %d and Y is : %d \n", x, y);
    return 0;
}
    
