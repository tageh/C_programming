#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(){

    int alder;
    printf("Hvor gammel er du? ");
    scanf("%d", &alder);

    if((alder>20) && (alder<30))
        printf("Du er mellom 20 og 30 år \n");
    else
        printf("Du er ikke mellom 20 og 30 år\n");
    
    return 0; 
}