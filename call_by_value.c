#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swapByValue: x = %d, y = %d\n", x, y);
}

void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swapByReference: x = %d, y = %d\n", *x, *y);
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swapByValue(a, b);
    printf("After swapByValue: a = %d, b = %d\n", a, b);

    swapByReference(&a, &b);
    printf("After swapByReference: a = %d, b = %d\n", a, b);

    return 0;
}
