#include <stdio.h>
int main()
{
	// To find Largest of two numbers
	int x, y;
	printf("Enter x: ");
	scanf("%d", &x);

	printf("Enter y: ");
	scanf("%d", &y);

	if(x>y){
		printf("%d is greater than %d.", x, y);
	}
else if(x == y){
		printf("%d(x) is equals to %d(y).", x, y);
	}
else{
		printf("%d is greater than %d.", y, x);
	}
	printf("\n");
    
	// To find Largest of two numbers
	printf("Enter x: ");
	scanf("%d", &x);

	printf("Enter y: ");
	scanf("%d", &y);

	if(x<y){
		printf("%d is smallest than %d.", x, y);
	}
else if(x == y){
		printf("%d(x) is equals to %d(y).", x, y);
	}
else{
		printf("%d is smallest than %d.", y, x);
	}
	printf("\n");

	return 0;
}