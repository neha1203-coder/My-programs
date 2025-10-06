#include <stdio.h>
int main(){
    int p , t, r;
    printf("enter p:");
    scanf("%d" ,&p);
    printf("enter t:");
    scanf("%d" , &t);
    printf("enter r:");
    scanf("%d" , &r); 
    int si;
    si = (p*r*t)/100;
    printf("simple interest: %d" ,si);
   
    return 0;
}