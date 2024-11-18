#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n (should be odd): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of odd number series up to %d is: %d\n", n, sum);

    return 0;
}

