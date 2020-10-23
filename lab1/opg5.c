#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(){

    int alder;
    printf("Hvor gammel er du? ");
    scanf("%d", &alder);

    if(alder>20)
        printf("Du er over 20 år \n");
    else if (alder == 20)
        printf("Du er 20 år \n");
    else
        printf("Du er under 20 år \n");
    
    return 0; //dette ble opg 6 også
}