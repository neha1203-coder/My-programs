#include <stdio.h>
int main(){
    int a, b, temp;
    printf("inter first no: ");
    scanf("%d", &a);
    printf("enter second no: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping:\n");
    printf("first no = %d\n", a);
    printf("second no = %d\n", b);
    return 0;
}