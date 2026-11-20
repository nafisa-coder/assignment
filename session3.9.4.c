#include <stdio.h>

int main() {
    int cricketScores[4][2] = {
        {180, 165},
        {210, 190},
        {175, 185},
        {200, 195}
    };

    for (int i = 0; i < 4; i++) {
        int highest;

        if (cricketScores[i][0] > cricketScores[i][1]) {
            highest = cricketScores[i][0];
        } else {
            highest = cricketScores[i][1];
        }

        printf("Match %d highest score: %d\n", i + 1, highest);
    }

    return 0;
}