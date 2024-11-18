#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n (should be odd): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        sum += i * i; // Square of odd numbers
    }

    printf("Sum of squares of odd numbers 1^2 + 3^2 + 5^2 + ... up to %d^2 is: %d\n", n, sum);

    return 0;
}

