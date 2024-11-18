#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int i, n;
    float x, sum = 0.0, term;
    
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
        sum += term;
    }

    printf("cos(%.2f) using %d terms is: %.5f\n", x, n, sum);

    return 0;
}

