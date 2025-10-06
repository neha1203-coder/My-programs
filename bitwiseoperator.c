#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBitwise Operations:\n");
    printf("%d & %d = %d (AND)\n", a, b, a & b);
    printf("%d | %d = %d (OR)\n", a, b, a | b);
    printf("%d ^ %d = %d (XOR)\n", a, b, a ^ b);

    return 0;
}
