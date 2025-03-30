// Користувач вводить два числа: ціле та дробове. 
// Програма має обчислюти середнє арифметичне та виводити результат 
// в консоль з точністю до 3 знаків після коми.

#include <stdio.h>

int main() {
    int wholeNumber;
    float decimalNumber, average;

    // Введення користувачем двох чисел
    printf("Enter an integer and a floating-point number: ");
    scanf("%d %f", &wholeNumber, &decimalNumber);

    // Обчислення середнього арифметичного (явне приведення типу int до float)
    average = (wholeNumber + decimalNumber) / 2.0;

    // Виведення результату з точністю до 3 знаків після коми
    printf("Average: %.3f\n", average);

    return 0;
}
