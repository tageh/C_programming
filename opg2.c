#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int fodelse_aar;
    int alder;
    int dette_aaret = 2020;

    printf("Hvor gammel er du? ");
    scanf("%d", &alder);
    fodelse_aar = dette_aaret - alder;
    printf("Du er født i %d.", fodelse_aar);

    system("read -p 'Press Enter to continue...' var");
    return 0;
}