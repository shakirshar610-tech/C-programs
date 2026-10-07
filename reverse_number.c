#include <stdio.h>

int main(void) {
    int n, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int value = n < 0 ? -n : n;
    while (value > 0) {
        reversed = reversed * 10 + value % 10;
        value /= 10;
    }

    if (n < 0) reversed = -reversed;
    printf("Reversed: %d\n", reversed);
    return 0;
}
