#include<stdio.h>
int main ()

 {
     int p,q,r,s;
     float ratio;
    printf ("Enter the values of integers");
     scanf("%d %d %d %d", &p,&q,&r,&s);

     if (r-s!=0)

     {
         ratio =(float)(p+q)/(float)(r-s);
         printf("ratio=%f\n",ratio);
     }
     else
     {
         printf("Operation is invalid");
     }
     return 0 ;
 }
