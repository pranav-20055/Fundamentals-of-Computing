#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int i, n;
    float x, sum = 0.0, term;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        term = pow(x, i) / factorial(i);
        sum += term;
    }

    printf("e^%.2f using %d terms is: %.5f\n", x, n, sum);

    return 0;
}

