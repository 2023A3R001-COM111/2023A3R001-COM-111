#include <stdio.h>

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n > 0) {
        double result = 1.0;
        for (int i = 0; i < n; i++) {
            result *= x;
        }
        return result;
    } else {
        double result = 1.0;
        for (int i = 0; i > n; i--) {
            result /= x;
        }
        return result;
    }
}

int main() {
    double base, result;
    int exponent;

    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("Result: %lf\n", result);

    return 0;
}
