#include <stdio.h>

int main() {
    int people, isBusiness, age;
    float cost;

    printf("Enter the number of people: ");
    scanf("%d", &people);
    printf("Is it a business trip? (1 for Yes, 0 for No): ");
    scanf("%d", &isBusiness);
    printf("Enter the age of the customer: ");
    scanf("%d", &age);

    if (people == 2) {
        cost = 85.0;
    } else if (people == 3) {
        cost = 90.0;
    } else if (people == 4) {
        cost = 95.0;
    } else {
        cost = 95.0 + (people - 4) * 6.0;
    }

    // Apply discounts
    if (isBusiness) {
        cost *= 0.8;  // 20% discount
    } else if (age > 60) {
        cost *= 0.85;  // 15% discount
    }

    printf("The total room cost is: $%.2f\n", cost);

    return 0;
}

