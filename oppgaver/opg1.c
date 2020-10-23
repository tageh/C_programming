#include <stdio.h>
#include <stdlib.h>

int lesAlder(arr[]);

int main(){

    int stud[10] = {0};

    printf("Gjennomsnitt alder er %d ", lesAlder(stud));

    return 0;
}


int lesAlder(arr[]){
    int i = 0;
    int sumAlder;
    float galder;

    for(i = 0; i<10; i++){
        printf("Hvor gammel er du?");
        scanf("%d ", &arr[i]);
        sumAlder = sumAlder + arr[i];
    }

    galder = sumAlder/10;

    return galder;
}