#include <stdio.h>

int* func1(int* arr, int size) {
    int num;
    printf("Enter a number to search for: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == num) {
            return (arr + i); // return address of first occurrence of num
        }
    }

    return 0; // return 0 if num is not found
}