#include <stdio.h>

int main() {
    int birth_year, current_year;
    printf("Enter birth year: ");
    scanf("%d", &birth_year);
    printf("Enter current year: ");
    scanf("%d", &current_year);
    
    int age = current_year - birth_year;
    printf("Your age is %d years.\n", age);
    return 0;
}
