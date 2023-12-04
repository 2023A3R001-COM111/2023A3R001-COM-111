#include <stdio.h>

int main()
{
    int numx, numy, numz;
	printf("Enter Number X: ");
	scanf("%d", &numx);
	printf("Enter Number Y: ");
	scanf("%d", &numy);
	printf("Enter Number Z: ");
	scanf("%d", &numz);

	if (numx >= numy){
		if (numx >= numz){
			printf("\nNumber X is Largest of all three.");
		} else {
			printf("\nNumber Z is Largest of all three.");
		}
	} else {
		if (numy >= numz){
			printf("\nNumber Y is Largest of all three.");
		} else {
			printf("\nNumber Z is Largest of all three.");
		}
	}
	printf("\n");

	return 0;
}