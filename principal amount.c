#include <stdio.h>

int main() {
    float principalAmount, rateOfInterest, totalInterest;

    printf("Enter the principal amount (in Rs.): ");
    scanf("%f", &principalAmount);

    // Checking conditions to determine the rate of interest
    if (principalAmount >= 10000) {
        rateOfInterest = 0.20; // 20%
    } else if (principalAmount >= 8000 && principalAmount <= 9999) {
        rateOfInterest = 0.18; // 18%
    } else {
        rateOfInterest = 0.16; // 16%
    }

    totalInterest = principalAmount * rateOfInterest;

    printf("Total interest based on the principal amount Rs. %.2f: Rs. %.2f\n", principalAmount, totalInterest);

    return 0;
}
