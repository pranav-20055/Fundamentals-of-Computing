#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Swapping values a -> b, b -> c, c -> a
    temp = a;
    a = c;
    c = b;
    b = temp;

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}


