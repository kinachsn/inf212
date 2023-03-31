#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    

    // Using malloc()
    printf("Enter the number of elements to allocate using malloc(): ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Memory allocated using malloc(): ");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    

    // Using calloc()
    printf("Enter the number of elements to allocate using calloc(): ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("Memory allocated using calloc(): ");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    

    // Using realloc()
    printf("Enter the new size of the array to be reallocated using realloc(): ");
    scanf("%d", &n);
    arr = (int*) realloc(arr, n * sizeof(int));
    printf("Memory reallocated using realloc(): ");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    

    // Freeing memory
    free(arr);
    return 0;
}
