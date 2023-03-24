#include <stdio.h>

#define MAX_ROWS        10
#define MAX_COLS        10

void func1(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_ROWS][MAX_COLS];

    printf("Please enter the number of rows (up to %d):", MAX_ROWS);
    scanf("%d", &rows);
    printf("Please enter the number of columns (up to %d): ", MAX_COLS);
    scanf("%d", &cols);

    printf("Please enter the matrix of size %d x %d:\n", rows, cols);
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix:\n");
    func1(matrix, rows, cols);

    return 0;
}
