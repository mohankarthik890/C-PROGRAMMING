#include <stdio.h>

int main() {
    int i, j, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // loop for upper half of the pattern
    for(i=1; i<=n; i++) {
        k = 0;
        for(j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(j=1; j<=i*2-1; j++) {
            if(j <= i) {
                printf("%c ", 'A' + k);
                k++;
            } else {
                k--;
                printf("%c ", 'A' + k);
            }
        }
        printf("\n");
    }

    // loop for lower half of the pattern
    for(i=n-1; i>=1; i--) {
        k = 0;
        for(j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(j=1; j<=i*2-1; j++) {
            if(j <= i) {
                printf("%c ", 'A' + k);
                k++;
            } else {
                k--;
                printf("%c ", 'A' + k);
            }
        }
        printf("\n");
    }

    return 0;
}
