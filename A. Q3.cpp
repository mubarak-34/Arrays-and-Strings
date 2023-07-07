#include <stdio.h>

#define ROWS 3
#define COLS 3

void findIndex(int mat[][COLS], int num) {
    int row = -1, col = -1;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (mat[i][j] == num) {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1 && col != -1) {
            break;
        }
    }
    
    if (row != -1 && col != -1) {
        printf("Number %d found at row %d and column %d.\n", num, row, col);
    } else {
        printf("Number %d not found in the matrix.\n", num);
    }
}

int main() {
    int mat[ROWS][COLS];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    int num;
    printf("Enter a number to search: ");
    scanf("%d", &num);
    
    findIndex(mat, num);
    
    return 0;
}

