#include <stdio.h>
int main() {
    int n, i, j, fact;
    long sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = 1;
        for (j = 1; j <= i; j++)
            fact *= j;
        sum += fact;
    }
    printf("Sum of series = %ld", sum);
    return 0;
}
