#include <stdio.h>

int add(int num1, int num2);

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = add(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}
