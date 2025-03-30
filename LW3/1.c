#include <stdio.h>

int main() {
    float meters;
    printf("Enter length in meters: ");
    scanf("%f", &meters);

    printf("Centimeters: %.2f cm\n", meters * 100);
    printf("Millimeters: %.2f mm\n", meters * 1000);

    return 0;
}
