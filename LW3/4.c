#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("%s\n", num % 2 ? "Odd" : "Even");

    return 0;
}
