#include <stdio.h>

int main(void) {
    int n;
    double sum = 0;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) return 1;

    double values[100];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    printf("Average: %.2f\n", sum / n);
    return 0;
}
