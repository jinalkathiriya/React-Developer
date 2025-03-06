#include <stdio.h>

#define MAX 10

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    addMatrices(A, B, result, rows, cols);

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
