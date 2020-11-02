#include <stdio.h>
#include <stdlib.h>

int lesInnTall(void);
int bitAND(int, int);
void skrivUtBit(int);


int main(){

    int num1 = lesInnTall(); int num2 = lesInnTall();
    printf("%d er i binary er: ",num1); skrivUtBit(num1);
    printf("%d er i binary er: ",num2); skrivUtBit(num2);
    printf("%d andet er i binary: ", bitAND(num1,num2)); skrivUtBit(bitAND(num1, num2));

    return 0;
}

int lesInnTall(void){
  int num;
  printf("Hvilkte to tall vil du convertere til binary? ");
  scanf("%d",&num);
 
  return num;
}

int bitAND(int num1, int num2){
  return num1 & num2;
}

void skrivUtBit(int num){  
   int i,j;

    for (i = 31; i >= 0; i--)
  {
    j = num >> i;

    if (j & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

}