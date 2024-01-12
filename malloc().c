#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr_malloc, *arr_calloc;
    int size, i;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Using malloc() to allocate memory
    arr_malloc = (int *)malloc(size * sizeof(int));
    // Check if memory allocation was successful
    if (arr_malloc == NULL) {
        printf("Memory allocation failed using malloc(). Exiting program.\n");
        return 1; // Exit with an error code
    }
    // Input values into the array allocated using malloc()
    printf("Enter %d integers for the array (malloc):\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr_malloc[i]);
    }
    // Using calloc() to allocate memory
    arr_calloc = (int *)calloc(size , sizeof(int));
    // Check if memory allocation was successful
    if (arr_calloc == NULL) {
        printf("Memory allocation failed using calloc(). Exiting program.\n");
        // Free the memory allocated using malloc before exiting
        free(arr_malloc);
        return 1; // Exit with an error code
    }

    // Input values into the array allocated using calloc()

    printf("Enter %d integers for the array (calloc):\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr_calloc[i]);
    }
    // Display the elements of the arrays
    printf("Array elements (malloc): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n");
    printf("Array elements (calloc): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");
    // Free the allocated memory
    free(arr_malloc);
    free(arr_calloc);
    return 0;
}
