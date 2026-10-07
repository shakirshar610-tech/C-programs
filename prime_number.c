#include <stdio.h>

int main(void) {
    int n, is_prime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2) is_prime = 0;

    for (int i = 2; i * i <= n && is_prime; i++) {
        if (n % i == 0) is_prime = 0;
    }

    printf("%d is %s prime.\n", n, is_prime ? "a" : "not");
    return 0;
}
