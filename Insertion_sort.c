#include<stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    // Traverse through the array
    for (i = 1; i < n; i++)
    {
        key = arr[i]; // Select the current element to be inserted at the right position
        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current element
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert key at its correct position
    }
}
int main()
{
    int n;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // Declare an array of size n
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Call the insertionSort function
    insertionSort(arr, n);
    // Output the Sorted array
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
