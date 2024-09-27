#include <stdio.h>
int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix1:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols1; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix2:\n");
    for (i = 0; i < rows2; ++i) {
        for (j = 0; j < cols2; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
