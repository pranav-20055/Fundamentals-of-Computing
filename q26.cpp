#include <stdio.h>

int main() {
    int n, num, max, i;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &max);  // Assume the first number is the largest

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The biggest number is: %d\n", max);

    return 0;
}

