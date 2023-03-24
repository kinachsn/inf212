#include <stdio.h>

#define N       4

int main() {
    int arr[N] = {10, 20, 30, 40}; // initialize array with some values

    printf("Array elements and their addresses:\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d: value=%d, address=%p\n", i, *(arr + i), (arr + i));
    }

    return 0;
}
