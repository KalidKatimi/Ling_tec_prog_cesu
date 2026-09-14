#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592


int main(){
	
	int opcao;

	printf("				=================================================\n");
	printf("				=================================================\n");
	printf("					      	 EXERCICIOS LISTA 2\n");
	printf("				=================================================\n");
	printf("				=================================================\n\n");
	
	printf("Escolha um exercicio:\n\n");
	printf("1 - Calcular ano de nascimento\n");
	printf("2 - Converter km/h para m/s\n");
	printf("3 - Converter reais para dolares\n");
	printf("4 - Converter Celsius para Fahrenheit\n");
	printf("5 - Converter graus para radianos\n");
	printf("6 - Sucessor e antecessor\n");
	printf("7 - Distribuicao de heranca\n");
	printf("8 - Converter segundos em horas/minutos/segundos\n");
	printf("9 - Consumo de combustivel na viagem\n");
	printf("10 - Maior entre tres numeros\n\n");
	
	printf("Digite sua opcao: ");
	scanf("%d", &opcao);
	printf("\n");

	switch(opcao){
		
		case 1:
		{
			int idade, ano, nascimento;

			printf("Quantos anos voce tem agora: ");
			scanf("%d", &idade);

			printf("Em que ano voce esta: ");
			scanf("%d", &ano);

			nascimento = ano - idade;

			printf("O ano de nascimento do usuario e em %d\n", nascimento);
			break;
		}
		
		case 2:
		{
			float K, M;
			
			printf("Qual a sua velocidade em km/h: ");
			scanf("%f", &K);

			M = K / 3.6;

			printf("Sua velocidade convertida para m/s e de %.2f m/s\n", M);
			break;
		}

		case 3:
		{
			float vreais, vdolar, cotacao;

			printf("Entre com o valor em reais: ");
			scanf("%f", &vreais);

			printf("A cotacao do dolar esta 1 real = 5,22\n");

			printf("Insira o valor da cotacao do dolar: ");
			scanf("%f", &cotacao);

			vdolar = vreais / cotacao;

			printf("O valor em dolares e de: %.2f\n", vdolar);
			break;
		}

		case 4:
		{
			float c, f;

			printf("Qual a temperatura em celsius: ");
			scanf("%f", &c);

			f = c * (9.0 / 5.0) + 32.0;

			printf("O valor convertido para Fahrenheit e de %.2f\n", f);
			break;
		}

		case 5:
		{
			double G, R;
			
			printf("Entre com o valor de graus: ");
			scanf("%lf", &G);
			
			R = G * (PI / 180);
			
			printf("Seu valor convertido para radianos e igual a %.2lf\n", R);
			break;
		}

		case 6:
		{
			int n, sucessor, antecessor;

			printf("Entre com o valor de n: ");
			scanf("%d", &n);

			sucessor = n + 1;
			antecessor = n - 1;

			printf("O numero %d, seu antecessor %d e seu sucessor %d\n", n, antecessor, sucessor);
			break;
		}

		case 7:
		{
			float A, B, C, heranca;

			heranca = 780000;
			
			A = heranca * 0.46;
			B = heranca * 0.32;
			C = heranca - (A + B);

			printf("O valor que cada um recebera e de:\n");
			printf("Pessoa 1: %.2f\n", A);
			printf("Pessoa 2: %.2f\n", B);
			printf("Pessoa 3: %.2f\n", C);
			break;
		}

		case 8:
		{
			int evento, hora, minuto, segundos, resto;
			
			printf("Quanto foi o tempo do evento em segundos: ");
			scanf("%d", &evento);

			hora = evento / 3600;
			resto = evento % 3600;

			minuto = resto / 60;
			segundos = resto % 60;
			
			printf("O tempo do evento ao todo foi de:\n");
			printf("%d Horas\n", hora);
			printf("%d Minutos\n", minuto);
			printf("%d Segundos\n", segundos);
			break;
		}

		case 9:
		{
			int horas, vmedia, km;
			float litrosdeC;

			printf("Qual foi o tempo gasto em horas do total da viagem: ");
			scanf("%d", &horas);

			printf("Qual foi a velocidade media em km/h durante a viagem: ");
			scanf("%d", &vmedia);

			km = vmedia * horas;
			
			litrosdeC = km / 12.0;

			printf("A distancia percorrida foi de %d km\n", km);
			printf("Foram usados %.2f Litros de combustivel ao todo da viagem\n", litrosdeC);
			break;
		}

		case 10:
		{
			int a, b, c, maiorTemp, maior;

			printf("Insira tres valores para saber qual e o maior: ");
			scanf("%d %d %d", &a, &b, &c);

			maiorTemp = ((a + b + abs(a - b)) / 2);
			maior = ((maiorTemp + c + abs(maiorTemp - c)) / 2);

			printf("O maior entre %d, %d e %d = %d\n", a, b, c, maior);
			break;
		}
		
		default:
			printf("Opcao invalida!\n");
	}

	return 0;
}
