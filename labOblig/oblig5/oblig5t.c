#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 9;
    int space = n-1;

    for(int i = 0; i<n; i++){
        for(int l = 0; l<space+1;l++){
            printf(" ");
        }
    
        for(int j = 1; j<2*i; j++){
            printf("%d", i);
        }
        printf("\n");
        space--;
    }

    space = 0;

    for(int i = n; i>0; i--){
        for(int l = 0; l<space;l++){
            printf(" ");
        }
    
        for(int j = 1; j<2*i; j++){
            printf("%d", i);
        }
        printf("\n");
        space++;
    }

    return 0;
}