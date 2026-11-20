#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Perfect\n");
    fprintf(fp, "Love Story\n");
    fprintf(fp, "Until I Found You\n");

    fclose(fp);

    printf("Songs written successfully!");

    return 0;
}