#include "stdio.h"
#include "stdlib.h"
#include "math.h"


void oppstartsTekst(void);
float lesInnRadius(void);
float regnUtOverflate(float);
float regnUtVolum(float);

int main(void){
	oppstartsTekst();
	 while(1){
		 float rad = lesInnRadius();
		 if(rad != 0){
		 	printf("Radiusen %.3f gir overflaten: %.3f \n", rad, regnUtOverflate(rad));
			printf("Radiusen %.3f gir volumet: %.3f \n", rad, regnUtVolum(rad));
		 }else{
			break;
		 }
	  }

	 return 0;
}


void oppstartsTekst(void){
	printf("Dette er et program som skal regne ut overflate og volum av en kule så lenge radiusen ikke er  0\n\n");
}

float lesInnRadius(void){
    float radius;
    printf("Skriv inn en radius: ");
    scanf("%f", &radius);
    return radius;
}

float regnUtOverflate(float radius){
	return (float)4*M_PI*pow(radius,2);
}

float regnUtVolum(float radius){
	return (float)4*M_PI*pow(radius,3)/3;
}   
