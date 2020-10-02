 #include <stdio.h>
 #include <stdlib.h>

int diamant(int n);

 int main(){

    int n = 9;

    printf("%d", diamant(n));

    return 0;
 }
 
 int diamant(int n){
     int space = n - 1; 

    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0;j < space; j++) 
            printf(" "); 
  
        for (int j = 1; j<=i; j++){
            printf(" Tabita"); 
        }
        printf("\n"); 
        space--; 
    }

    space = 0; 

    for (int i = n; i > 0; i--) 
    { 

        for (int j = 0; j < space; j++) 
            printf(" "); 

        for (int j = 1;j <=i;j++) 
            printf("Tabita "); 
  
        printf("\n"); 
        space++; 
    }
 }
 
 
/*
gunner på med 2 for loops, en for hver halve del, den ene tar ++ og den andre --

         1
        222
       33333
      4444444
     555555555
    66666666666
   7777777777777
  888888888888888
 99999999999999999
  888888888888888
   7777777777777
    66666666666
     555555555
      4444444
       33333
        222
         1
*/