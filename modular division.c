#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int mod_2 = number % 2;
    int mod_3 = number % 3;
    int mod_4 = number % 4;

    printf("Modular division by 2, 3, and 4:\n");
    printf("Remainder when divided by 2: %d\n", mod_2);
    printf("Remainder when divided by 3: %d\n", mod_3);
    printf("Remainder when divided by 4: %d\n", mod_4);

    return 0;
}
