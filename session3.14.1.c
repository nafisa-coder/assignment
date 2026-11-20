#include <stdio.h>

int main() {

    char *items[] = {"Burger", "Pizza", "Fries"};

    int prices[] = {120, 250, 90};

    int total = 0;

    // Loop through all items
    for (int i = 0; i < 3; i++) {

        // Add each item's price to total
        total += prices[i];
    }

    // Display total price
    printf("Total price is: %d\n", total);

    return 0;
}