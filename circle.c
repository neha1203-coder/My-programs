#include <stdio.h>
#define PI 3.14159
int main(){
    float radius, area, circumference;
    printf("enter radius of the circle:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("area of circle = %.2f\n", area);
    printf("circumference of circle = %2f\n", circumference);
    return 0;
    

    
}