#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    long long sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += pow(i, i); // i^i
    }

    printf("Sum of the series 1^1 + 2^2 + 3^3 + ... + %d^%d is: %lld\n", n, n, sum);

    return 0;
}

