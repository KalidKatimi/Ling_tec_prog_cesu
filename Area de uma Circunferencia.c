#include <stdio.h>
#define pi 3.1415

int main(){
	double RAIO, AREA;
	
	printf("Qual o valor do raio do circulo? ");
	scanf("%lf", &RAIO);
	
	AREA = pi * (RAIO*RAIO);
	
	printf("O valor da area desse circulo é igual a %.2lf", AREA);
	
	return 0;
}
