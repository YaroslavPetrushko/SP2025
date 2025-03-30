#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    a = a + b; // Сума двох чисел
    b = a - b; // Віднімаємо b від суми, отримаємо старе значення a
    a = a - b; // Віднімаємо нове b, отримаємо старе значення b
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
