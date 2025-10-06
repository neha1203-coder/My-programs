#include <stdio.h>

int main() {
    int a, b, shift;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Input shift value
    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    // Bitwise Operations
    printf("\n--- Bitwise Operations ---\n");
    printf("%d && %d = %d  (AND)\n", a, b, a && b);
    printf("%d | %d = %d  (OR)\n", a, b, a | b);
    printf("%d ^ %d = %d  (XOR)\n", a, b, a ^ b);

    // Shift Operations
    printf("\n--- Shift Operations ---\n");
    printf("%d << %d = %d  (Left Shift)\n", a, shift, a << shift);
    printf("%d >> %d = %d  (Right Shift)\n", a, shift, a >> shift);

    return 0;
}
