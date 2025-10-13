#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
