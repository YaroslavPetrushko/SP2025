#include <stdio.h>

int main() {
    char lower, upper;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &lower); 

    upper = lower - ('a' - 'A'); 
    printf("Uppercase: %c\n", upper);

    return 0;
}
