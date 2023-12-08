// Program to illustrate how to use #define to declare 
#include <stdio.h> 
// Defining macros with constant value 
#define PI 3.14159265359 
int main() 
{ 
    int radius=25;
	int area;

    area = PI * radius * radius; 

	printf("Area of Circle of radius %d: %d", radius, area); 

	return 0; 
}
