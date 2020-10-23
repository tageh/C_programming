#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main(){

    char tekst[3];

    printf("Skrive noe: ");
    scanf("%s", tekst);

    if(strcmp(tekst,"nei") == 0){
        printf("riktig svar %s", tekst);
    }else{
        printf("feil svar %s", tekst);
    }



    return 0;
}