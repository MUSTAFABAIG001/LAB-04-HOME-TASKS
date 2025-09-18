#include <stdio.h>

int main() {
    int size, pizzas, crust, time, option;
    float total = 0.0;
    char cheese, student;

    printf("Choose Pizza Size (1. Small, 2. Medium, 3. Large): ");
    scanf("%d", &size);
    if (size == 1) {
        total = 8.0;
        printf("Small pizza selected.\n");
    } else if (size == 2) {
        total = 10.0;
        printf("Medium pizza selected.\n");
    } else if (size == 3) {
        total = 12.0;
        printf("Large pizza selected.\n");
    } else {
        printf("Invalid size.\n");
        return 0;
    }

    printf("How many pizzas? ");
    scanf("%d", &pizzas);
    if (pizzas > 1) {
        printf("Check our multi-pizza deals.\n");
    }
    total *= pizzas;

    printf("Crust Type (1. Regular $0, 2. Thin $1, 3. Stuffed $2): ");
    scanf("%d", &crust);
    if (crust == 2) total += pizzas * 1.0;
    else if (crust == 3) total += pizzas * 2.0;
    printf("Total after crust: $%.2f\n", total);

    printf("Extra Cheese (Y/N): ");
    scanf(" %c", &cheese);
    if (cheese == 'Y' || cheese == 'y') total += pizzas * 1.5;
    printf("Total after cheese: $%.2f\n", total);

    printf("Current time (0-23): ");
    scanf("%d", &time);
    if (time > 11 && time < 14) {
        total *= 0.9;
        printf("Discounted total: $%.2f\n", total);
    }

    printf("Student ID (Y/N): ");
    scanf(" %c", &student);
    if (student == 'Y' || student == 'y') {
        total -= 2.0;
        printf("Total after student discount: $%.2f\n", total);
    }

    printf("Delivery option (1. Pickup, 2. Delivery): ");
    scanf("%d", &option);
    if (option == 2) total += 3.0;

    if (pizzas == 3 && crust == 3) {
        printf("You get free garlic bread!\n");
    }

    printf("\n===Receipt===\n");
    printf("Total amount: $%.2f\n", total);
    return 0;
}
