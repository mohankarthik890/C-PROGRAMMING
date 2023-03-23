#include <stdio.h>

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("The squares of the elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    printf("\n");

    return 0;
}
