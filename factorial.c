#include <stdio.h>

int main(void) {
    int n;
    unsigned long long result = 1;

    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a value from 0 to 20.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++) result *= i;
    printf("%d! = %llu\n", n, result);
    return 0;
}
