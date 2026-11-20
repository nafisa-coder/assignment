#include <stdio.h>

int main() {
    const float GST_RATE = 0.18f;
    float basePrice = 500.0f;

    float gst = basePrice * GST_RATE;
    float finalPrice = basePrice + gst;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST: %.2f\n", gst);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}