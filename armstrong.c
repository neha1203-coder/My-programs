#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    
    if ((int)result == originalNum) {
        printf("%d is an Armstrong Number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong Number.\n", originalNum);
    }

    return 0;
}
