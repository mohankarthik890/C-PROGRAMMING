#include <stdio.h>

int main() {
    int a[20][20], c[20][20], i, j, r1, c1;

    printf("\nEnter the number of rows and columns of a matrix: \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe elements of the matrix are:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < c1; i++) {
        for (j = 0; j < r1; j++) {
            c[i][j] = a[j][i]; /* swapping rows and columns */
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
