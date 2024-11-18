#include <stdio.h>

int main() {
    int n, i;

    // Input upper limit of the series
    printf("Enter the value of n (should be even): ");
    scanf("%d", &n);

    printf("Even number series: ");
    for(i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

