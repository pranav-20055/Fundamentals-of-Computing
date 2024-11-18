#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input upper limit of the series
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum
    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

    return 0;
}

