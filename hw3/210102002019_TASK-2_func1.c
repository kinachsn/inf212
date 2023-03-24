#include <stdio.h>

void func1(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}