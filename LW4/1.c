#include <stdio.h>

int main() {
    int price = 450;
    int discount = price * 15 / 100; 
    int final_price = price - discount; 
    printf("Price with discount: %d hrn.\n", final_price);
    return 0;
}
