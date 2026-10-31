



#include <stdio.h>

int main() {
    int secretNum = 42; 
    int guess;
    int attempts = 0;

    printf(" Number Guessing Game ===\n");
    printf("Guess the secret number between 1 and 100!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++; 

        if (guess > secretNum) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNum) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it right.\n");
        }
    } while (guess != secretNum);

    printf("Total guesses made: %d\n", attempts);

    return 0;
}