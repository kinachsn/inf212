#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Enter the size of the array (must be greater than 9): ");
    scanf("%d", &n);

    if (n <= 9) {
        printf("Error: Array size must be greater than 9.\n");
        return 1;
    }

    // Allocate memory for the array
    int *arr = (int*) malloc(n * sizeof(int));

    // Seed the random number generator
    srand(time(NULL));

    // Fill the array with random integers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50; // Generate a random integer between 0 and 49
    }

    // Find the smallest element in the array
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the array and the smallest element
    printf("Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSmallest element: %d\n", min);

    // Free the memory allocated for the array
    free(arr);

    return 0;
}
