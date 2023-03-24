#include <stdio.h>

int main() {
    const int x = 5;  // Define a constant variable x with the value 5
    int* ptr = (int*)&x;  // Declare a pointer variable to x

    *ptr = 10;  // Modify the value of x using the pointer

    printf("Modified value of x: %d\n", x);  // Print the modified value of x

    return 0;
}
