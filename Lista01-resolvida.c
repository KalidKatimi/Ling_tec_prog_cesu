#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592

int main(){
    
    //exercicio 1
  
    int a, b;

    printf("Primeiro numero que sera impresso");
    scanf("%d", &a);
    
    printf("Segundo numero que sera impresso");
    scanf("%d", &b);

    printf("Sua ordem inversa e: %d %d", b, a);

    return 0;
    
    //exercicio 2

    double A, formula;
    int n;

    printf("Entre com o valor de A:\n ");
    scanf("%lf", &A);

    if (A >= 1 && A < 10){
        //valido
    }

    printf("Entre com o valor de n:\n ");
    scanf("%d", &n);

    formula = A * pow(10, n);

    printf("O resultado da formula e: %.0lf", formula);

    return 0;


    /* forma alternativa de fazer
    double A, formula;
    int n;

    printf("Entre com o valor de A:\n ");
    scanf("%lf", &A);

    if (A >= 1 && A < 10){
        //valido
    }

    printf("Entre com o valor de n:\n ");
    scanf("%d", &n);


    printf("em NOTACAO: %.0lf * 10^%d", A,n);

    return 0;
    */

    //exercicio 3  
  
  int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado;
    
    printf("Entre com o valor de N: ");
    scanf("%d", &n);
    
    resultado = n;
    
    bit64 = resultado%2;
    resultado = resultado/2;
    
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
    
    
    printf("O valor de N em binário é: %d%d%d%d%d%d%d\n", bit2, bit4, bit8, bit16, bit32, bit64);
   
    return 0;
    
    //exercicio 4

    double sfixo, vtotal, soma;

    printf("Entre com o valor do seu salario fixo: ");
    scanf("%lf", &sfixo);

    printf("Qual o valor total de suas vendas: ");
    scanf("%lf", &vtotal);

    soma = sfixo + (vtotal * 0.15);

    printf("o total a receber no final do mes e de %.2lf", soma);

    return 0;


    //exercicio 5
    
    float a, b, c, d, soma, media, produto;

    printf("Entre com o valor de a: ");
    scanf("%f", &a);
    
    printf("Entre com o valor de b: ");
    scanf("%f", &b);
    
    printf("Entre com o valor de c: ");
    scanf("%f", &c);
    
    printf("Entre com o valor de d: ");
    scanf("%f", &d);

    soma = a + b + c + d;
    media = soma / 4;
    produto = a * b * c * d;

    printf("A soma dos valores e: %.2f\n", soma);
    printf("A media dos valores e: %.2f\n", media);
    printf("O produto dos valores e: %.2f\n", produto);

    return 0;

    //exercicio 6
    int tdias, anos, meses, dias, resto;

    printf("Digite a idade em dias: ");
    scanf("%d", &tdias);

    anos = tdias / 365;
    resto = tdias % 365;

    meses = resto / 30;
    dias = resto % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;

    //exercicio 7

    float raio, volume;

    printf("Qual o valor do raio da esfera:");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);

    printf("O volume dessa esfera e de %.2f", volume);

    return 0;


    //exercicio 8
    int x1,x2,y1,y2;
    float d, cat1, cat2;

    printf("Entre com a distancia do p1(x1,y1)");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Entre com a distancia do p2(x2,y2)");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    cat1 = pow(x2 - x1, 2);
    cat2 = pow(y2 - y1, 2);

    d = sqrt(cat1 + cat2);

    printf("A distancia entre os dois pontos e de %.2f", d); //nao acho que tem problema colocando o %.2f

    return 0;

    
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

    //exercicio 9 da lista 2

    int horas, autonomia, vmedia, km;
    float litrosdeC;

    printf("Qual foi o tempo gasto em horas do total da viagem: ");
    scanf("%d", &horas);

    printf("\nQual foi a velocidade media em km/h durante a viagem: ");
    scanf("%d", &vmedia);

    km = vmedia * horas;
    
    litrosdeC = km / 12.0;

    printf("A , B, C < 0distancia percorrida foi de %d km ", km);

    printf("Foram usado %.3d Litros de combustivel ao todo da viagem ", litrosdeC);

    return 0;

    //exercicio 10 da lista 2

    int  a, b, c, maiorTemp, maior;

    printf("Insira o valor para saber qual e o maior");
    scanf("%d %d %d", &a , &b , &c  );

    maiorTemp = ((a + b + abs( a - b)) / 2);

    maior = ((maiorTemp + c + abs(maiorTemp - c )) / 2);

    printf("o maio entre |%d| %d| %d| = %d", a, b, c, maiorTemp);

    int X, Y, D;
    
    scanf("%d", &X);
    
    D = X * 2;
    
    printf("%d minutos", X );

    int N;
    int n100, n50, n20, n10, n5, n2, n1;

    scanf("%d", &N);

    n100 = N / 100;
    N = N % 100;

    n50 = N / 50;
    N = N % 50;

    n20 = N / 20;
    N = N % 20;

    n10 = N / 10;
    N = N % 10;

    n5 = N / 5;
    N = N % 5;

    n2 = N / 2;
    N = N % 2;

    n1 = N;

    printf("%d\n", n100 * 100 + n50 * 50 + n20 * 20 + n10 * 10 + n5 * 5 + n2 * 2 + n1);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    int N, horas,minutos, segundos, resto;

    scanf("%d", &N);

    horas = N / 3600;
    resto = N % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d", horas, minutos,segundos);

    int a, anos, meses, dias, resto;

    scanf("%d", &a);

    anos = a / 365;
    resto = a % 365;

    meses = resto / 30;
    dias = resto % 30;
   
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    double A, B, C, R1, R2;
    double delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - 4 * A * C;

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } 
    else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;

     char letra;
    
    scanf("%c", &letra);
    
    if(letra == 'A'){
        printf("A de amor\n");
    } else if(letra == 'B'){
        printf("B de baixinho\n");
    } else if(letra == 'C'){
        printf("C de coracao\n");
    } else if(letra == 'D'){
        printf("D de docinho\n");
    } else if(letra == 'E'){
        printf("E de escola\n");
    } else if(letra == 'F'){
        printf("F de fe ijao\n");
    } else if(letra == 'G'){
        printf("G de gente\n");
    } else if(letra == 'H'){
        printf("H de humano\n");
    } else if(letra == 'I'){
        printf("I de igualdade\n");
    } else if(letra == 'J'){
        printf("J de juventude\n");
    } else if(letra == 'L'){
        printf("L de liberdade\n");
    } else if(letra == 'M'){
        printf("M de molecagem\n");
    } else if(letra == 'N'){
        printf("N de natureza\n");
    } else if(letra == 'O'){
        printf("O de obrigado\n");
    } else if(letra == 'P'){
        printf("P de protecao\n");
    } else if(letra == 'Q'){
        printf("Q de quero-quero\n");
    } else if(letra == 'R'){
        printf("R de riacho\n");
    } else if(letra == 'S'){
        printf("S de saudade\n");
    } else if(letra == 'T'){
        printf("T de terra\n");
    } else if(letra == 'U'){
        printf("U de universo\n");
    } else if(letra == 'V'){
        printf("V de vitoria\n");
    } else if(letra == 'X'){
        printf("X o que que e? E Xuxa!\n");
    } else if(letra == 'Z'){
        printf("Z e zum, zum, zum, zum, zum\n");
    } else {
        printf("Letra nao encontrada no abecedario da Xuxa\n");
    }

    //As letras K, W e Y não aparecem na música, então aparecem no else final


    

}
