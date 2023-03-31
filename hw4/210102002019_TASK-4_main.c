#include <stdio.h>
#include <stdlib.h>

float func1(float *arr, int size);

int main() {
    int length, i;
    float *array;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    array = (float *) calloc(length, sizeof(float));

    if (array == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d float numbers: \n", length);
    for (i = 0; i < length; i++) {
        scanf("%f", &array[i]);
    }

    printf("The elements of the array: ");
    for (i = 0; i < length; i++) {
        printf("%f ", array[i]);
    }
    printf("\n");

    printf("The largest element in the array: %f\n", find_max(array, length));

    free(array);
    return 0;
}

float func1(float *arr, int size) {
    float max = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
