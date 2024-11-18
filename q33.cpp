#include <stdio.h>

int main() {
    int age;
    float charge;

    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age > 55) {
        charge = 10.00;
    } else if (age >= 21 && age <= 54) {
        charge = 15.00;
    } else if (age >= 13 && age <= 20) {
        charge = 10.00;
    } else if (age >= 3 && age <= 12) {
        charge = 5.00;
    } else {
        charge = 0.00;
    }

    printf("The ticket charge is: $%.2f\n", charge);

    return 0;
}

