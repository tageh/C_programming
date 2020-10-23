#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "string.h"

int lesInn(void);
void trekk(int arr[]);
int skrivUt(int arr[], int count);
void selectionSort(int arr[], int n);
void swap(int *xp, int *yp);
int randomTall(void);
int skrivTilFil(int arr[], int count, FILE *f);


int main(){
    FILE *f;
    f = fopen("Lotto.txt", "a ");

    int j;
    char svar[3];
    int rekker = lesInn();
    int arrTall[7];
    int teller;

    srand(time(0));
    int n = sizeof(arrTall)/sizeof(arrTall[0]); 

    printf("Ønsker du å lagre til fil?\n ");
    scanf("%s", svar);

    for(j = 0; j <rekker; j++){
        teller +=1;
        trekk(arrTall);
        printf("\n");
        selectionSort(arrTall, n); 
        skrivUt(arrTall, j);
        
        if(strcmp(svar,"ja") == 0){
            skrivTilFil(arrTall, j, f);
            if(j == 9){
                printf("\n\n");
            }
        }else{
            printf("Lagrer ikke til fil\n");
        }

        if(teller == 10){
            fprintf(f, "\n\n");
        }
    }
    return 0;
}

int lesInn(void){
    int rekker;
    printf("Hvor mange rekker ønsker du å generere?");
    scanf("%d", &rekker);
    return rekker;
}

int randomTall(void){
    return (rand() % 34) + 1;
}

void trekk(int arr[]){
    int i;
    int j;
    
    for(i = 0; i < 7; i++){
        int randTall = randomTall();
        if(i == 0){
            arr[0] = randTall;
            continue;
        }

        for(j = 0; j < i; j++){
            if(arr[j] == randTall){
                randTall = randomTall();
                j = 0;
            }
        }
    arr[i] = randTall;
    }
}

int skrivUt(int arr[], int count){
    int i;
    printf("%d: ", count + 1);
    
    for(i = 0; i<7; i++){
        if(arr[i]<10) printf("0");
        printf("%d ",(arr[i]));
    }
}

void swap(int *xp, int *yp) { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[], int n) { 
    int i, j, minste; 
  
    for (i = 0; i < n-1; i++) 
    { 
        minste = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[minste]) 
            minste = j; 
 
        swap(&arr[minste], &arr[i]); 
    } 
} 

int skrivTilFil(int arr[], int count, FILE *f){
    //FILE *f;
    //f = fopen("Lotto.txt", "a ");
    if(f == NULL){
        printf("Kunne ikke lagre");
    }else{
        fprintf(f,"%d: ", count + 1);
        for(int i = 0; i<7; i++){
            fprintf(f, "%d ",(arr[i]));
            }
        }
        fprintf(f,"\r");
        fclose(f);
    }