#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    int book_id;
};


struct date{
    unsigned int nMonthDay : 5; //Deklarer bit til å bruke, 5 bit 0-31
    unsigned int nMonth : 4; // 4 bit for å kunne lagre 12
    unsigned int nYear: 16; //16 bit for å lagre 4 sifra tall fks 2020
}fodselsdato;


int main(){

    struct Books Book1;
    strcpy(Book1.title, "C Programming");
    printf("Tittelen er: %s\n",Book1.title );


    fodselsdato.nMonthDay = 1;
    fodselsdato.nMonth = 7;
    fodselsdato.nYear = 2007;

    return 0;
}