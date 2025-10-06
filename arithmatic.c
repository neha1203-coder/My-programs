#include <stdio.h>
int main(){
    int a , b;
    printf("inter first no:");
    scanf("%d", &a);
    printf("inter second no:");
    scanf("%d", &b);
    int sum;
    sum = a + b;
    printf("sum: %d\n" ,sum);
    int difference = a - b;
    printf("difference: %d\n",difference);
    int mul;
    mul = a * b;
    printf("mul: %d\n",mul);
    float div = a/b;
    printf("div: %f\n" ,div);
    return 0;



}