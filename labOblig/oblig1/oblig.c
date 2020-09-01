#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#ifdef _WIN32 /*Sjekker om du er på windowns system*/
#include <Windows.h> /*Hvis så includer den windown biblotet for å bruke sleep funksjonen*/
#else
#include <unistd.h>/*Hvis ikke så includer den et biblotek som funker på andre oprativsystemer*/
#endif /*avslutter if-statement*/

int main(){

    int year;
    int age;
    char buffer[100];

    printf("This program will calculate how old you are \n\n");
    sleep(2); /*Venter 2 sekunder før resten av programmet kjører*/

    do
    {
        printf("what year were you born in?\n");
        fgets(buffer, 99, stdin);
        int num = sscanf(buffer, "%d", &year);
        
        if(num){
        age = 2020 - year;
      
            if(year >= 1910 && year <= 2020){
                printf("You will or have turned %d year this year \n\n", age);
                sleep(1);
            }else if (year == 0){
                printf("Program exits \n");
            }else{
                printf("write a valid input between 1910 and 2020\n\n");
                sleep(1);
            }
       }else{
           printf("This is not a number! Try again\n\n");
           sleep(1);
       } 
    }while (year != 0);

    //system("PAUSE");
    return 0;
}