#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(){
    int svar;
    int vekt;

    printf("Hvilken posttype ønsker du å sende brevet med (A/B?) Tast 1 for A og 2 for B: ");
    scanf("%d", &svar);
    printf("Hvor mye veier brevet?: ");
    scanf("%d", &vekt);

    if((svar == 1) && (vekt < 20))
        printf("Dette brevet skal sendes med A post\nDu må betale kr. 4.20 \n");
    else if((svar == 2) && (vekt < 20))
        printf("Dette brevet skal sendes med B post\nDu må betale kr. 3.60 \n");
    else if ((svar == 1) && (vekt >20<50))
        printf("Dette brevet skal sendes med A post\nDu må betale kr. 6.30 \n");
    else if ((svar == 2) && (vekt < 20<50))
        printf("Dette brevet skal sendes med B post\nDu må betale kr. 5.40 \n");
    else
        printf("Vi selger ikke denne tjenesten.Dette brevet må du levere selv!\n");

    return 0;
}