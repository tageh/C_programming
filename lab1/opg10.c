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

    if(svar == 1){
        nok = sum * 8.94;
        printf("%.2fusd tilsvarer %.2fnok\n", sum,nok);
    }   
    else{
        usd = sum * 0.11;
        printf("%.2fnok tilsvarer %.2fusd\n", sum, usd);
    }
    return 0;
}