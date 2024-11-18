#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int limit;

    printf("Enter the limit for the prime number series: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are: ", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

