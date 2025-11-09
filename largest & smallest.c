#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;
    int *p;
    int min, max;

    printf("Enter 3x3 matrix elements:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    p = &mat[0][0];   // pointer to first element
    min = max = *p;   // initialize min and max

    for (i = 0; i < 9; i++) {
        if (*(p + i) < min)
            min = *(p + i);
        if (*(p + i) > max)
            max = *(p + i);
    }

    printf("\nSmallest number = %d", min);
    printf("\nLargest number  = %d\n", max);

    return 0;
}