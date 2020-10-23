#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    float hoyde;
    float lengde;
    float svar;

    printf("Skriv inn lengden på gunn-linja: ");
    scanf("%f", &lengde);
    printf("Skriv inn høyden til trekanten: ");
    scanf("%f", &hoyde);

    svar = (hoyde*lengde)/2;
    printf("Arealet til trekanten er:  %f\n", svar); //må bruke %f og ikke %d fordi dett er float og ikke int

    return 0;
}
