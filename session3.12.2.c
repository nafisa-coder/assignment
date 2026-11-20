#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {

    struct FoodItem menu[3] = {
        {"Veg Pizza", 199.0, 4.5},
        {"Cheese Burger", 149.0, 4.2},
        {"Paneer Biryani", 249.0, 4.7}
    };

    printf("Zomato Menu Details:\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Item Name: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
        printf("-------------------\n");
    }

    return 0;
}