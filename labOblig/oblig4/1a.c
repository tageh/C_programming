#include <stdio.h>
#include <stdlib.h>

int main(){

    /*oppgave a fikset */
    int teller;
    for(teller = 20; teller>=10; teller--)
        printf("%d\n", teller);

    /* Oppgave b fikset*/
    int tall;
    printf("Skriv inn et tall: ");
    scanf("%d",&tall);

    if(tall % 2)
        printf("Tallet %d er et oddetall.\n", tall);
    else
        printf("Tallet %d er et partall.\n", tall);
    

   /*oppgave c fikset*/
   int sum = 0;
   int teller;

   for(teller = 10; teller<=25; teller++){
        sum = sum + teller;
        printf("Summen er %d\n", sum);
    }
    return 0;
}