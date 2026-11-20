#include <stdio.h>

void formatFollowersCount(int count) {

    // Check if followers are in millions
    if (count >= 1000000) {
        printf("%.1fM\n", count / 1000000.0);
    }

    // Check if followers are in thousands
    else if (count >= 1000) {
        printf("%.1fK\n", count / 1000.0);
    }

    // Print original count if below 1000
    else {
        printf("%d\n", count);
    }
}

int main() {

    formatFollowersCount(1500);
    formatFollowersCount(1200000);
    formatFollowersCount(500);

    return 0;
}