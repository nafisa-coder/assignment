#include <stdio.h>

int main() {
    int orders[5] = {250, 150, 300, 450, 200};
    int *ptr = orders;

    for (int i = 0; i < 5; i++) {
        printf("Order Amount: %d\n", *(ptr + i));
        printf("Memory Address: %p\n\n", (void*)(ptr + i));
    }

    return 0;
}