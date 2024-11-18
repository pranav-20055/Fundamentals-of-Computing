#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum -= i; // Subtract if i is even
        } else {
            sum += i; // Add if i is odd
        }
    }

    printf("Sum of the series 1 - 2 + 3 - 4 + ... up to %d is: %d\n", n, sum);

    return 0;
}

