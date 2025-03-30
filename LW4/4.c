#include <stdio.h>

int main() {
    double price, discount_percent, discount, final_price;
    
    printf("Enter price of item: ");
    scanf("%lf", &price);
    printf("Enter discount percent: ");
    scanf("%lf", &discount_percent);

    discount = price * (discount_percent / 100);
    final_price = price - discount;

    printf("Final price : %.2f hrn.\n", final_price);
    return 0;
}
