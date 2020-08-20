#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(){
    float usd;
    float nok;
    int svar;
    float sum;

    printf("Tast 1 for USD til NOK og 2 for NOk til USD: ");
    scanf("%d", &svar);
    printf("hvor mye ønsker du og konvertere? ");
    scanf("%f", &sum);

    nok = sum * 8.94;
    usd = sum * 0.11;

    if(svar == 1)
        printf("%fusd tilsvarer %fnok\n", sum,nok);
    else
        printf("%fnok tilsvarer %fusd\n", sum, usd);
    
    return 0;
}