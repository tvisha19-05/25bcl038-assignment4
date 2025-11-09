Q.1 #include <stdio.h>

#define ROWS 4
#define COLS 4

// Function to sort using pointers (Bubble Sort)
void sortMatrixElements(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int matrix[ROWS][COLS];
    int array[ROWS * COLS];
    int i, j, k = 0;

    // Input matrix
    printf("Enter elements of 4x4 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", (*(matrix + i) + j));  // pointer-based input
        }
    }

    // Copy matrix elements to 1D array
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            array[k++] = *(*(matrix + i) + j);
        }
    }

    // Sort array elements
    sortMatrixElements(array, ROWS * COLS);

    // Print sorted 1D array
    printf("\nSorted elements in 1D array:\n");
    for (i = 0; i < ROWS * COLS; i++) {
        printf("%d ", *(array + i));
    }

    return 0;
}