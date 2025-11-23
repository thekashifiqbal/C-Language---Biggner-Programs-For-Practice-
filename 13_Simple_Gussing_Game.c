#include <stdio.h>

int main() {
    int secretNumber = 5;
    int Guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;
    while (Guess != secretNumber && outOfGuess == 0){
        if (guessCount < guessLimit)
        {
        printf("Enter Guess Number between 1 to 10: ");
        scanf("%d", &Guess);
        guessCount++; 
        } else {
            outOfGuess = 1;
        }

    }
    if (outOfGuess == 1) {
        printf("You are out of guesses! The correct number was: %d\n", secretNumber);
    } else {
    printf("Congratulations! You guessed the correct number: %d\n", secretNumber);
    }
    
    return 0; 
}