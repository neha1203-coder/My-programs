#include <stdio.h>
int main() {
    int a, b, *p, *q, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    p = &a; q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}
