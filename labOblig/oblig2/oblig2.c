#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int lesInn(void);
void trekk(int arr[]);
void skrivUt(int arr[], int count);
void selectionSort(int arr[], int n);
void swap(int *xp, int *yp);
int randomTall(void);


int main(){
    int j;
    
    int rekker = lesInn();
    int arrTall[7];
    srand(time(0));
    int n = sizeof(arrTall)/sizeof(arrTall[0]); 
    


    for(j = 0; j <rekker; j++){
        trekk(arrTall);
        printf("\n");
        selectionSort(arrTall, n); 
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

void skrivUt(int arr[], int count){
    int i;
    printf("%d :", count + 1);
    
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