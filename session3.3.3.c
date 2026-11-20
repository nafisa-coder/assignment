#include <stdio.h>

int main() {
    char playlistName[] = "My Favorites";
    int totalSongs = 25;
    float averageDuration = 3.5f;

    printf("My playlist \"%s\" has %d songs with an average duration of %.1f minutes.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
}