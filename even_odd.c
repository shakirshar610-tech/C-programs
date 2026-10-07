#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
    return 0;
}
