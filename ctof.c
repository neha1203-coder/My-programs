// #include <stdio.h>
// int main(){
//     double celcius = 77;
//     double fahrenheit;
//     fahrenheit = (celcius * 9 / 5) + 32;
//     printf("temperature in celcius: %f\n", celcius);
//     printf("temperature in fahrenheit: %f\n", fahrenheit);
//     return 0;
// }

#include<stdio.h>
int main(){

    double c = 45.0;
    double f = (c * 9 / 5) + 32;
    printf("Conversion of c %.0f to f is %.2f",c,f);

    return 0;
}