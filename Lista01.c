#include <stdio.h>
#include <math.h>

int main(){
	
	int n, bit64, resultado, bit32, bit16, bit8, bit4, bit2;
	
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	
	bit64 = n%2;
	resultado = n/2;
	
	bit32 = resultado%2;
	resultado = resultado/2;
	
	bit16 = resultado%2;
	resultado = resultado/2;
	
	bit8 = resultado%2;
	resultado = resultado/2;
	
	bit4 = resultado%2;
	resultado = resultado/2;
	
	bit2 = resultado%2;
	resultado = resultado/2;
	
	
	printf("o numero em %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit2, bit4, bit8, bit16, bit32, bit64, resultado%2 );
	
	int x1,x2,y1,y2;
	float dist, cat1, cat2;
	
	printf("Entre com os valores para p1(x1,y1) ");
	scanf("%d", &x1);
	scanf("%d", &y1);

	printf("Leitura: (%d,%d)", x1,y1);
	
	printf("Entre com os valores para p2(x2,y2) ");
	scanf("%d", &x2);
	scanf("%d", &y2);

	printf("Leitura: (%d,%d)", x2,y2);
	
	cat1 = pow(x2-x1, 2);
	cat2 = pow(y2-y1, 2);

	dist = sqrt (cat1+cat2);
	
	printf("Distancia %f", dist);	
	return 0;
}
