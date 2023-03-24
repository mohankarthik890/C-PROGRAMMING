#include <stdio.h>

void add();

int main() {
    add(); // call the add function
    return 0;
}

void add() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);
}
