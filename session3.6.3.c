#include <stdio.h>
#include <string.h>

int main() {
    char songs[3][50] = {
        "Perfect",
        "Kesariya",
        "Until I Found You"
    };

    char guess[50];
    int songNumber = 1;

    printf("Guess the Song!\n");
    printf("Hint: Guess one of the songs from the list.\n");

    do {
        printf("\nSongs:\n");
        printf("1. Perfect\n");
        printf("2. Kesariya\n");
        printf("3. Until I Found You\n");

        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if (strcmp(guess, songs[songNumber - 1]) == 0) {
            printf("Correct! You guessed the song!\n");
            break;
        }
        else {
            printf("Wrong guess! Try again.\n");
        }

    } while (1);

    return 0;
}