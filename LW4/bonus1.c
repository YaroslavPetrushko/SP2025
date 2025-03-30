// Що виведе наступний код?

#include <stdio.h>

int main() {
    double price = 499.99;
    int discount = 20;
    double final_price = price * (1 - discount / 100);
    printf("%.2f\n", final_price);
    return 0;
}
