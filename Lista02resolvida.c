
#include <stdio.h>
#define PI 3.141592
#include <math.h> // ou <stdlib.h> 

int main(){
	
	//exercicio 1 da lista 2

    int idade, ano, nascimento;

    printf("Quantos anos voce tem agora: ");
    scanf("%d", &idade);

    printf("Em que ano voce esta; ");
    scanf("%d", &ano);

    
    nascimento = ano - idade;
    
    
    printf("O ano de nascimento do usuario e em %d", nascimento);
    
    return 0;

    
    //exercicio 2 da lista 2
    
    int K, M;
    
    printf("Qual a sua velocidade em km/h ");
    scanf("%d", &K);

    M = (K / 36);

    printf("Sua velocidade convertida para m/s e de %.2dm/s", M);

    return 0;

    //exercicio 3 da lista 2

    float vreais, vdolar, cotacao;

    printf("Entre com o valor em reais: ");
    scanf("%f", &vreais);

    printf("A cotacao do dolar esta 1 real = 5,22"); //feito no dia 18/08/2026

    printf("Insira o valor da cotacao do dolar:\n ");
    scanf("%f", &cotacao);

    //cotacao = 5.22;
    vdolar = vreais / cotacao;

    printf("o valor em dolares e de: %.2f", vdolar );

    return 0;

    //exercicio 4 da lista 2

    float c, f;

    printf("Qual a temperatura em celsius ");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32.0;

    printf("O valor convertido para Fahrenheit e de %f", f);

    return 0;

    //exercicio 5 da lista 2

    double G, R;
	
	printf("Entre com o valor de graus");
	scanf("%lf", &G);
	
	R = G * (PI / 180);
	
	printf("Seu valor convertido para radianos e igual a %.2lf", R);
	
	return 0;
	

    //exercicio 6 da lista 2

    int n, sucessor, antecessor;

    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    sucessor = n + 1;
    antecessor = n - 1;

    printf("O numero %d, seu antecessor %d e seu sucessor %d ", n, sucessor, antecessor);

    return 0; 

    //exercicio 7 da lista 2

    float A, B, C, heranca; //essa heranca é a que esta na lista no valor de 780.000 

    heranca = 780000;
    
    A = heranca * 0.46;
    B = heranca * 0.32;
    C = heranca - (A + B);
    
    
    //C = heranca * 0.22;

    printf("O valor que cada um recebera e de %.2f | %.2f | %.2f ", A, B, C);

    return 0;

    //exercicio 8 da lista 2

    int evento, hora, minuto, segundos, resto;
    printf("Quanto foi o tempo do evento em segundos: ");
    scanf("%d", &evento);

    hora = evento / 3600;
    resto = evento % 3600;

    minuto = resto / 60;
    segundos = resto % 60;
    
    printf("O tempo do evento ao todo foi de: %f Horas\n %fMinutos\n e %fSegundos\n", hora, minuto, segundos);

	return 0;

    //exercicio 9 da lista 2

    int horas, autonomia, vmedia, km;
    float litrosdeC;

    printf("Qual foi o tempo gasto em horas do total da viagem: ");
    scanf("%d", &horas);

    printf("\nQual foi a velocidade media em km/h durante a viagem: ");
    scanf("%d", &vmedia);

    km = vmedia * horas;
    
    litrosdeC = km / 12.0;

    printf("A distancia percorrida foi de %d km ", km);

    printf("Foram usado %.3d Litros de combustivel ao todo da viagem ", litrosdeC);

    return 0;

    //exercicio 10 da lista 2

    int  a, b, c, maiorTemp, maior;

    printf("Insira o valor para saber qual e o maior");
    scanf("%d %d %d", &a , &b , &c  );

    maiorTemp = ((a + b + abs( a - b)) / 2);

    maior = ((maiorTemp + c + abs(maiorTemp - c )) / 2);

    printf("o maio entre |%d| %d| %d| = %d", a, b, c, maiorTemp);

	return 0;
}

