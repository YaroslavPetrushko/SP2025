#include <stdio.h>

int main() {
    int integer;
    float decimal, sum;

    printf("Enter an integer and a float: ");
    scanf("%d %f", &integer, &decimal);

    sum = integer + decimal;
    printf("Sum: %.2f\n", sum);

    return 0;
}
