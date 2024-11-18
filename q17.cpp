#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);
    while (num != 0) {
        printf("%d ", num % 10);
        num /= 10;
    }
    printf("\n");

    return 0;
}

