#include <stdio.h>
#include <stdlib.h>

struct Binary lesInnTall();
int bitAND(int,int);
void skrivUtBit(int);


int main(){
    struct Binary numbers = lesInnTall();
    //int num1,num2 = lesInnTall();
    //lesInnTall();
    bitAND(numbers.num1, numbers.num2);

    return 0;
}

struct Binary lesInnTall(){
    struct Binary numbers;
    int num1,num2;
    printf("Hvilkte to tall vil du convertere til binary? ");
    //scanf("%d", &num1);
    numbers.num1 = scanf("%d", &num1);;
    //scanf("%d", &num2);
    numbers.num2 = scanf("%d", &num2);;
    return numbers;
}

int bitAND(int num1,int num2){

    printf("%d, %d", num1, num2);
}

struct Binary{
    int num1;
    int num2;
};
