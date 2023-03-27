//8.	Write a program in C to find the largest element using Dynamic Memory Allocation. 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array, n, i, largest;

    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    array = (int*)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Error: Memory allocation failed!");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    largest = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("The Largest element is: %d",largest);

    free(array);
    return 0;
}

