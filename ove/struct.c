#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books{
    char title[50];
    char author[50];
    int book_id;
};



int main(){

    struct Books Book1;
    strcpy(Book1.title, "C Programming");
    printf("Tittelen er: %s\n",Book1.title );

    return 0;
}