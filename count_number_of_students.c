#include<stdio.h>

#define MAXVAL 50
#define COUNTER 11

int main()
{
    float value[MAXVAL];
    int i, low, high;
    int group[COUNTER] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Reading and Counting
    printf("Enter marks for %d students:\n", MAXVAL);
    for (i = 0; i < MAXVAL; i++)
    {
        // Reading of values
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &value[i]);
        // Counting frequency of groups
        ++group[(int)(value[i]) / 10];
    }

// Printing of Frequency Table
printf("\nGROUP   RANGE   FREQUENCY\n\n");
for (i = 0; i < COUNTER; i++)
{
    low = i * 10;
    if (i == 10)
        high = 100;
    else
        high = low + 9;
    printf("%2d %3d to %3d %d\n", i + 1, low, high, group[i]);

}
return 0;
}
