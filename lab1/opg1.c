#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int fodelse_aar;
    int alder;
    int dette_aaret = 2020;

    printf("Hvilket år er du født? (fks 1990) ");
    scanf("%d", &fodelse_aar);
    alder = dette_aaret - fodelse_aar;
    printf("Du fyller/har fyldt %d år.", alder);

    system("read -p 'Press Enter to continue...' var");
    return 0;
}