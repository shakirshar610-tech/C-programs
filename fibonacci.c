#include <stdio.h>

int main(void) {
    int terms;
    long long a = 0, b = 1;

    printf("Number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) return 1;

    for (int i = 0; i < terms; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
