#include <stdio.h>

int main() {
    // Variable declarations
    int rowA = 4, colA = 3; // Dimensions of matrix A
    int rowB = 3, colB = 5; // Dimensions of matrix B
    int sum = 0;            // Variable to hold the sum for matrix multiplication
    int i, j, k;           // Loop counters
    int matrixA[4][3], matrixB[3][5], matrixC[4][5]; // Matrices

    // Check if multiplication is possible (columns of A must equal rows of B)
    if (colA != rowB)
        {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        return 1; // Exit if dimensions are incompatible
        }

    // Input elements for matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rowA; i++)
        {
        for (j = 0; j < colA; j++)
            {
            scanf("%d", &matrixA[i][j]);
            }
        printf("\n");
        }


    // Input elements for matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rowB; i++)
        {
        for (j = 0; j < colB; j++)
            {
            scanf("%d", &matrixB[i][j]);
            }
        printf("\n");
        }


    // Perform matrix multiplication
    for (i = 0; i < rowA; i++)
        {
        for (j = 0; j < colB; j++)
            {
            for (k = 0; k < colA; k++)
                {
                sum += (matrixA[i][k] * matrixB[k][j]);
                }
            matrixC[i][j] = sum; // Store result in matrix C
            sum = 0; // Reset sum for the next element
            }
        }


    // Output the resulting matrix C
    printf("Resulting matrix C:\n");
    for (i = 0; i < rowA; i++)
        {
        for (j = 0; j < colB; j++)

            {
            printf("%d ", matrixC[i][j]);
            }
        printf("\n");
        }

    return 0;
}
