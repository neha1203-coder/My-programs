#include <stdio.h>

int main() {
    int num, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    int left = num << shift;   // Left shift
    int right = num >> shift;  // Right shift

    printf("\nOriginal number: %d", num);
    printf("\nAfter Left Shift (%d << %d): %d", num, shift, left);
    printf("\nAfter Right Shift (%d >> %d): %d\n", num, shift, right);

    return 0;
}
