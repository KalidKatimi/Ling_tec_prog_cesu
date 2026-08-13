#include <stdio.h>

int main(){
	double base, altura, area;
	
	printf("Insira o valor da base: \n");
	scanf("%lf", &base);
	
	printf("Insira o valor da altura: \n");
	scanf("%lf", &altura);
	
	area = (base * altura) / 2;
	
	printf("A Area do triangulo e igual a %.2lf", area);
	 
	return 0;
}
