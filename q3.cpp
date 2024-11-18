#include <stdio.h>

int main() {
    int n, i;

    // Input upper limit of the series
    printf("Enter the value of n (should be odd): ");
    scanf("%d", &n);

    printf("Odd number series: ");
    for(i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

