#include<stdio.h>
int main() {
    FILE *file;
    char data[100];
    // Open a file for writing
    file = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }
    // Get input from the user
    printf("Enter data to write to the file:\n");
    fgets(data, sizeof(data), stdin);

    // Write the data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    // Read and display the content of the file
    printf("\nContent of the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Close the file
    fclose(file);

    return 0;
}
