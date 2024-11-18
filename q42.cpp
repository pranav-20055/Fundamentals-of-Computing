#include <stdio.h>

int main() {
    int a[10][10], b[10][10], product[10][10];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

