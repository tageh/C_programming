#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *f;
    FILE *g;

    char ch;
    //f = fopen("testfil.txt", "w");
    g = fopen("testfil.txt", "r");

   /* if(f==NULL){
        printf("Kunne ikke lage filen\n");
    }else{

        fprintf(f, "Min første fil");
        fprintf(f, "\r\nMed 2 linjer");
        fclose(f);
    }*/

    if(g==NULL){
        perror("Kunne ikke lage filen\n");
    }else{
        
        do{
            ch = fgetc(g);
            if(feof(g))break;
            printf("%c", ch);
        }while(1);

        fclose(g);
    }

    

    return 0;
}