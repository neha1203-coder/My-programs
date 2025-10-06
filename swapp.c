#include <stdio.h>
int main(){
    int a , b;
    printf("enter first no:");
    scanf("%d", &a);
    printf("enter second no:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping:\n");
    printf("first no:%d\n", a);
    printf("second no:%d\n", b);
    return 0;
}