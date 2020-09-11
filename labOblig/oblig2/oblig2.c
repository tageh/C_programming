#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int lesInn(void);
void trekk(int arr[]);
void skrivUt(int arr[], int count);

int main(){
    int j;
    
    int rekker = lesInn();
    int arrTall[7];
    srand(time(0));

    for(j = 0; j <rekker; j++){
        trekk(arrTall);
        printf("\n");
        skrivUt(arrTall, j);
    }
    return 0;
}

int lesInn(void){
    int rekker;
    printf("Hvor mange rekker ønsker du å generere?");
    scanf("%d", &rekker);
    return rekker;
}

void trekk(int arr[]){
    int i;
    for(i = 0; i<7; i++){
        arr[i] = 1 + rand() % 34;
    }
}

void skrivUt(int arr[], int count){
    int i;
    printf("%d :", count + 1);
    
    for(i = 0; i<7; i++){
        if(arr[i]<10) printf("0");
        printf("%d ",(arr[i]));
    }
}