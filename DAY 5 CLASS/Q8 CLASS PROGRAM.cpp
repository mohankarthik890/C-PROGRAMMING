#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);
    printf("%lf ^ %d = %lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent) {
    double result = 1.0;
    int i;

    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
