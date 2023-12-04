//arithmetic operations
#include <stdio.h>

int main()
{
  int choice, a, b, result;

	printf("Select an arithmetic operation from following:");
	printf("\n 1. Addition.");
	printf("\n 2. Subtraction.");
	printf("\n 3. Multiplication.");
	printf("\n 4. Division.");
	printf("\n: ");

	scanf("%d", &choice);

	printf("\nEnter two number: ");
	scanf("%d %d", &a, &b);

	switch (choice)
  {
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
		default:
			printf("\nEnter a Valid Number!\n");
	}

	printf("\nResult: %d\n", result);
	return 0;

}