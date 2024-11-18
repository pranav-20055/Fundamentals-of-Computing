#include <stdio.h>

int main() {
    float cubicFeet, bill;

    printf("Enter the cubic feet of water used: ");
    scanf("%f", &cubicFeet);

    if (cubicFeet <= 1000) {
        bill = 15.00;
    } else if (cubicFeet <= 2000) {
        bill = 15.00 + (cubicFeet - 1000) * 0.0175;
    } else if (cubicFeet <= 3000) {
        bill = 15.00 + 1000 * 0.0175 + (cubicFeet - 2000) * 0.02;
    } else {
        bill = 70.00;
    }

    printf("The water bill is: $%.2f\n", bill);

    return 0;
}

