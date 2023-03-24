#include <stdio.h>

int is_prime(int n) {
    int i;
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n, count = 0, num = 2, nth_prime = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("%d prime numbers are: ", n);

    while (count < n) {
        if (is_prime(num)) {
            count++;
            printf("%d ", num);
            if (count == n) {
                nth_prime = num;
            }
        }
        num++;
    }

    printf("\n%dth prime number is %d\n", n, nth_prime);

    return 0;
}
