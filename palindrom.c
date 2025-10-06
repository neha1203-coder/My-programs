#include <stdio.h>
int main()
{
    int n, temp, digit, sum = 0, reverse = 0;
    printf("enter a number:");
    scanf("%d", &n);
    temp = n;
    while(temp > 0){
        digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    printf("sum of digits = %d\n", sum);
    printf("revese of number = %d\n", reverse);
    if (n == reverse){
        printf("%d is a palindrome number.\n", n);}
        else{
            printf("%d is not a palindrome number.\n",n);
        }
    
    return 0;
}