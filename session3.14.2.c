
#include <stdio.h>

// Function to check whether a number is even
int isEven(int num) {

    // Check if remainder is zero
    if (num % 2 == 0) {
        return 1;  // Even
    }
    else {
        return 0;  // Odd
    }
}

int main() {

    printf("%d\n", isEven(10));
    printf("%d\n", isEven(7));

    return 0;
}

