#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = num1 & num2;

    printf("Bitwise AND result: %d\n", result);

    return 0;
}
