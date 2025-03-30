#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    
    if (a > b)
        printf("Greater number: %d\n", a);
    else if (b > a)
        printf("Greater number: %d\n", b);
    else
        printf("Numbers are equal.\n");
    
    return 0;
}
