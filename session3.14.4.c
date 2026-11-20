#include <stdio.h>

int main() {

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Check whether the number is even
        if (i % 2 == 0) {

            // Print even number
            printf("%d\n", i);
        }
    }

    return 0;
}