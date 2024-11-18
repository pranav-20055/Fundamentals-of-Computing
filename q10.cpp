#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n (should be even): ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        sum += i * i; // Square of even numbers
    }

    printf("Sum of squares of even numbers 2^2 + 4^2 + ... up to %d^2 is: %d\n", n, sum);

    return 0;
}

