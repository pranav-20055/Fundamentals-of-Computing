#include <stdio.h>

int main() {
    int number, sum = 0, digit, checkDigit;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    int originalNumber = number;

    // Calculate the sum of digits
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    // Determine the check digit
    checkDigit = (sum % 2 == 0) ? 0 : 1;

    // Display the result
    printf("Original number: %d\n", originalNumber);
    printf("Number with check digit: %d%d\n", originalNumber, checkDigit);

    return 0;
}

