#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of matrices: ");
    scanf("%d", &n);
    
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    multiplyMatrices(mat1, mat2, result, n);
    
    printf("\nMatrix 1:\n");
    displayMatrix(mat1, n);
    
    printf("\nMatrix 2:\n");
    displayMatrix(mat2, n);
    
    printf("\nMultiplication Result:\n");
    displayMatrix(result, n);
    
    return 0;
}

