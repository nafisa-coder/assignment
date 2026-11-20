#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Night Changes\n");
    fprintf(fp, "Love Me Like You Do\n");

    fclose(fp);

    printf("Two songs added successfully!");

    return 0;
}