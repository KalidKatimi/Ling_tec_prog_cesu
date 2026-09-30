#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

/* Prototipos: avisam ao compilador que essas funcoes existem,
 para que o main possa chama-las antes de elas serem definidas. */
void mostrar_menu(void);
void inverter_numeros(void);
void notacao_cientifica(void);
void converter_binario(void);
void salario_comissao(void);
void soma_media_produto(void);
void converter_dias(void);
void volume_esfera(void);
void distancia_pontos(void);

int main(){

    int opcao;

    mostrar_menu();

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){
        case 1: inverter_numeros();    break;
        case 2: notacao_cientifica();  break;
        case 3: converter_binario();   break;
        case 4: salario_comissao();    break;
        case 5: soma_media_produto();  break;
        case 6: converter_dias();      break;
        case 7: volume_esfera();       break;
        case 8: distancia_pontos();    break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

void mostrar_menu(void){
    printf("				=================================================\n");
    printf("				=================================================\n");
    printf("					      	 EXERCICIOS LISTA 1\n");
    printf("				=================================================\n");
    printf("				=================================================\n\n");

    printf("Escolha um exercicio:\n\n");
    printf("1 - Inverter dois numeros\n");
    printf("2 - Notacao cientifica\n");
    printf("3 - Converter para binario\n");
    printf("4 - Salario com comissao\n");
    printf("5 - Soma, media e produto\n");
    printf("6 - Converter dias em anos/meses/dias\n");
    printf("7 - Volume de uma esfera\n");
    printf("8 - Distancia entre dois pontos\n\n");
}

void inverter_numeros(void){
    int a, b;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &a);

    printf("Entre com o segundo numero: ");
    scanf("%d", &b);

    printf("Sua ordem inversa e: %d %d\n", b, a);
}

void notacao_cientifica(void){
    double A, formula;
    int n;

    printf("Entre com o valor de A: ");
    scanf("%lf", &A);

    if (A >= 1 && A < 10){
        printf("Valor valido!\n");
    }
    else{
        printf("Valor invalido! (deve estar entre 1 e 10)\n");
    }

    printf("Entre com o valor de n: ");
    scanf("%d", &n);

    formula = A * pow(10, n);

    printf("O resultado da formula e: %.0lf\n", formula);
}

void converter_binario(void){
    int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado;

    printf("Entre com o valor de N: ");
    scanf("%d", &n);

    resultado = n;

    bit64 = resultado % 2;
    resultado = resultado / 2;

    bit32 = resultado % 2;
    resultado = resultado / 2;

    bit16 = resultado % 2;
    resultado = resultado / 2;

    bit8 = resultado % 2;
    resultado = resultado / 2;

    bit4 = resultado % 2;
    resultado = resultado / 2;

    bit2 = resultado % 2;
    resultado = resultado / 2;

    printf("O valor de N em binario e: %d%d%d%d%d%d\n", bit2, bit4, bit8, bit16, bit32, bit64);
}

void salario_comissao(void){
    double sfixo, vtotal, soma;

    printf("Entre com o valor do seu salario fixo: ");
    scanf("%lf", &sfixo);

    printf("Qual o valor total de suas vendas: ");
    scanf("%lf", &vtotal);

    soma = sfixo + (vtotal * 0.15);

    printf("O total a receber no final do mes e de %.2lf\n", soma);
}

void soma_media_produto(void){
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
}

void converter_dias(void){
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
}

void volume_esfera(void){
    float raio, volume;

    printf("Qual o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);

    printf("O volume dessa esfera e de %.2f\n", volume);
}

void distancia_pontos(void){
    int x1, x2, y1, y2;
    float d, cat1, cat2;

    printf("Entre com a distancia do p1(x1,y1): ");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Entre com a distancia do p2(x2,y2): ");
    scanf("%d", &x2);
    scanf("%d", &y2);

    cat1 = pow(x2 - x1, 2);
    cat2 = pow(y2 - y1, 2);

    d = sqrt(cat1 + cat2);

    printf("A distancia entre os dois pontos e de %.2f\n", d);
}
