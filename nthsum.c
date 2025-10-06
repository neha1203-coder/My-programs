#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter a number:");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        sum += i;
    }
    printf("sum of first %d numbers = %d\n", n, sum);
    return 0;
}