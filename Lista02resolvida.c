
#include <stdio.h>
#define PI 3.141592
#include <math.h> // ou <stdlib.h> 

int main(){
	
	//exercicio 1
	
	int n, antecessor, sucessor;
	
	printf("Entre com o valor de N: ");
	scanf("%d", &n);
	
	//sucessor = n+1;
	//antecessor = n-1;
	
	printf("O numero %d, seu antecessor %d e seu sucessor %d ", n , --n, ++n );
	
	return 0;
	
	
	
	//exercicio 4
	float c, f;
	
	printf("Qual a temperatura em Celsius");
	scanf("%f", &c);
	
	f = c * (9.0 / 5.0) + 32.0);
	
	printf("A temperatura em Fahrenheit e de  %.2f", f);
	
	return 0;
	
	
	//exercicio 5
	double G, R;
	
	printf("Entre com o valor de graus");
	scanf("%lf", &G);
	
	R = G * (PI / 180);
	
	printf("Seu valor convertido para radianos e igual a %.2lf", R);
	
	return 0;
	
	//exercicio 10
	
	int a, b, c, maiorTemp, maior;
	
	printf("Insira o valor para saber qual é o maior");
	scanf("%d %d %d", &a ,&b ,&c);
	
	maiorTemp = ((a + b + abs(a - b)) / 2);
	
	maior = ((maiorTemp+ c + abs(maiorTemp - c)) / 2);
	
	
	printf("o maior entre |%d|%d|%d| = %d", a, b, c, maiorTemp);
	
	return 0;
	
}

