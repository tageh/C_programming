#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsius;
    float fahrenheit;
    float kelvin;
    char input;

    printf("Dette programmet skal utføre temperaturkonvertering fra Celsius til Kelvin. Tast inn Temperatur i Celsius!: \n");
    scanf("%f", &celsius);
    printf("Skal denne temperaturen konverteres til F eller K? \n");
    scanf("%s", &input);

    kelvin = 273 + celsius;
    fahrenheit = 32+(celsius*9/5);
    
    if(input == 'K')
        printf("%fc tilsvarer %f kelvin\n",celsius, kelvin);
    else
        printf("%fc tilsvarer %f fahrenheit \n",celsius, fahrenheit);

    return 0;
}