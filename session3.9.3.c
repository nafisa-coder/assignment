#include <stdio.h>

float calculateAverage(int orders[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += orders[i];
    }

    return (float)sum / size;
}

int main() {
    int dailyOrders[7] = {250, 400, 300, 500, 350, 450, 200};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average weekly spend: %.2f\n", average);

    return 0;
}