#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main() {
    int followers[5] = {500, 800, 1200, 1500, 2000};

    incrementFollowers(followers, 5);

    printf("Updated follower counts:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", followers[i]);
    }

    return 0;
}