#include <stdio.h>
int main(){
    float f = 98.6;
    float c;
    c = (f - 32) * 5 / 9;
    printf("temperature in fahrenheit: %f\n", f);
    printf("temperature in celcius: %f\n", c);
    return 0;
}