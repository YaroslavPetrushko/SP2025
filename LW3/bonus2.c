// Напишіть програму, яка зчитує символ і перевіряє 
// чи є він цифрою (0–9), великою літерою (A–Z) або малою літерою (a–z).

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    
    if (ch >= '0' && ch <= '9')
        printf("It's a digit.\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("It's an uppercase letter.\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("It's a lowercase letter.\n");
    else
        printf("It's a special character.\n");

    return 0;
}
