#include <stdio.h>

// Function declaration
void swap(int *x, int *y);

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Function call
    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
