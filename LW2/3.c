#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Last digit: %d\n", num % 10);
    
    return 0;
}
