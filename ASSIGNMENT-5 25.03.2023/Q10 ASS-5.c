//10. Write a program in C to find the square of any number using the function. 
#include <stdio.h>

float square(float num);

int main() {
    float num, result;

    printf("Input any number for square: ");
    scanf("%f", &num);

    result = square(num);

    printf("The square of %.2f is: %.2f", num, result);

    return 0;
}

float square(float num) {
    return num * num;
}

