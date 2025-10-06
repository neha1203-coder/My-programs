#include <stdio.h>
#include <math.h>
int main()
{
    double principal, rate, time, ci, amount;
    printf("enter principal:");
    scanf("%lf", &principal);
    printf("enter rate:");
    scanf("%lf", &rate);
    printf("enter time:");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;
    printf("total amount = %.2lf\n", amount);

    printf("compound interest = %.2lf\n", ci);
    return 0;
}