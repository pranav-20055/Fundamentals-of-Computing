#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", sum / n);

    return 0;
}

