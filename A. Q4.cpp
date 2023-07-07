#include <stdio.h>

int binarySearch2D(int arr[][4], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / cols;
        int col = mid % cols;

        if (arr[row][col] == target)
            return 1;
        else if (arr[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0; 
}

int main() {
    int arr[][4] = {{2, 4, 6, 8},
                    {10, 12, 14, 16},
                    {18, 20, 22, 24}};

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int target = 14;
    int isPresent = binarySearch2D(arr, rows, cols, target);

    if (isPresent)
        printf("Element %d found in the 2D array.\n", target);
    else
        printf("Element %d not found in the 2D array.\n", target);

    return 0;
}

