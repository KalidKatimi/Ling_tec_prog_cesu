#include <stdio.h>
#include <math.h>
#define PI 3.14159

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

    A >= 1 && A < 10;

    printf("Entre com o valor de n:\n ");
    scanf("%d", &n);

    formula = A * pow(10, n);

    printf("O resultado da formula e: %.2lf", formula);

    return 0;

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

    printf("Qual o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);

    printf("O volume dessa esfera e de %.2f ", volume);

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

    printf("A distancia entre os dois pontos e de %.2f", d); // acho que tem problema colocando o %.2f

    return 0;

}
