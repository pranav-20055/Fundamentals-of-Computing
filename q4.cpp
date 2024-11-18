#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

