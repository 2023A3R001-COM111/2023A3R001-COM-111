#include<stdio.h>
#include<math.h>
int main ()
{
    float a1 ,b1,a2,b2,distance;
    printf("Enter the coordinates of first point");
    scanf("%f %f",& a1, &b1);
    printf("Enter the coordinates of second point");
    scanf("%f %f", & a2,&b2);

    distance = sqrt(pow(a2-a1, 2)+ pow(b2-b1,2));
    printf("The value of Distance between the two points is: %f\n",distance);
    return 0;
}
