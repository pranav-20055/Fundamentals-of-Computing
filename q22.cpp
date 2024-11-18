#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

