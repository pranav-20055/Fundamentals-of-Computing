#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i * i * i; // Cube of i
    }

    printf("Sum of cubes 1^3 + 2^3 + 3^3 + ... up to %d^3 is: %d\n", n, sum);

    return 0;
}

