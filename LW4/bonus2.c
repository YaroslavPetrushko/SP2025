// Створити програму яка допоможе користувачеві підрахувати 
// загальну вартість ігор, які він збирається придбати.
// Програма повинна:
// Запитати у користувача кількість ігор.
// Зчитати ціни кожної гри.
// Запитати у користувача відсоток знижки на весь кошик (якщо є).
// Вивести підсумкову вартість покупок з урахуванням знижки.

#include <stdio.h>

int main() {
    int num_games;
    double total_price = 0.0, discount_percent, discount, final_price;

    printf("Welcome in Steam mini-store.\n");
    printf("How much games are you buying?\n");
    scanf("%d", &num_games);

    for (int i = 0; i < num_games; i++) {
        double price;
        printf("Enter videogame #%d price: ", i + 1);
        scanf("%lf", &price);
        total_price += price;
    }

    printf("Enter discount (for all items): "); // 0 якщо немає знижки
    scanf("%lf", &discount_percent);

    discount = total_price * (discount_percent / 100.0);
    final_price = total_price - discount;

    printf("\nPrice without discount: %.2f $\n", total_price);
    printf("Discount save: %.2f $\n", discount);
    printf("Total cost: %.2f $\n", final_price);

    return 0;
}
