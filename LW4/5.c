#include <stdio.h>

int main() {
    int num, sum;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    int hundreds = num / 100;       // Отримуємо сотні
    int tens = (num / 10) % 10;      // Отримуємо десятки
    int ones = num % 10;             // Отримуємо одиниці

    sum = hundreds + tens + ones;

    printf("Sum of digits: %d\n", sum);
    return 0;
}
