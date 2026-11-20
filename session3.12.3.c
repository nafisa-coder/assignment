#include <stdio.h>

struct Time {
    int hours;
    int minutes;
};

struct MovieShow {
    char Movie[50];
    int Screen;
    struct Time showTime;
};

int main() {

    struct MovieShow show = {
        "Avengers",
        2,
        {18, 30}
    };

    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.Movie,
           show.Screen,
           show.showTime.hours,
           show.showTime.minutes);

    return 0;
}