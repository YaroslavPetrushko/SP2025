#include <stdio.h>

int main() {
    int quantity;
    float price, totalCost;
    
    printf("Enter quantity of items: ");
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%f", &price);
    
    totalCost = quantity * price;
    printf("Total cost: %.2f\n", totalCost);
    
    return 0;
}
