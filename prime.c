#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter number (1-100): ");
    scanf("%d", &n);
    if (n <= 1)
        flag = 1;
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            flag = 1;
    if (flag == 0)
        printf("%d is Prime", n);
    else
        printf("%d is Not Prime", n);
    return 0;
}
