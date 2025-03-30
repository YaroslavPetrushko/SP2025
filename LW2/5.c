#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    int reversed = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
