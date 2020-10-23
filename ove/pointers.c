#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sorter(int arr[], int teller);

int main(){

    srand(time(0));
    int count = 5;
    int arr[count];
    int* ptrarr[count];

    for(int i = 0; i<count; i++){
        arr[i] = rand() % 50+1;
        ptrarr[i] = &arr[i];
    }
    
    sorter(ptrarr, count);
    
    for(int i = 0; i<count; i++){
        

        //printf("%3d:\n", arr[i]);
        //printf("%d: %p \n",arr[i], &arr[i]);
        printf("%d: %p \n",*ptrarr[i], ptrarr[i]);
        //printf("\n");
    }

    //printf("adressen til arrayen %p", ptrarr);

    return 0;
}

void sorter(int arr[], int teller){
    int i=0, j=0, temp=0;

    for(i = 0; i<teller; i++){
        for(j = 0; j<teller-1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}