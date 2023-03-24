#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;
    srand(time(NULL)); // seed the random number generator
    randomNumber = rand() % 100 + 1; // generate a random number between 1 and 100
    printf("Guess a number between 1 and 100:\n");

    do {
        scanf("%d", &guess);
        if (guess > randomNumber) {
            printf("Too high! Guess again:\n");
        } else if (guess < randomNumber) {
            printf("Too low! Guess again:\n");
        }
    } while (guess != randomNumber);

    printf("Congratulations! You guessed the number.\n");
    return 0;
}

