#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int opcao;

    printf("				=================================================\n");
    printf("				=================================================\n");
    printf("					      	    EXERCICIOS\n");
    printf("				=================================================\n");
    printf("				=================================================\n\n");

    printf("Escolha um exercicio:\n\n");
    printf("1 - Ordem inversa e ordenacao de 100 numeros\n");
    printf("2 - Notacao cientifica\n");
    printf("3 - Converter para binario\n");
    printf("4 - Maior entre 10 valores\n");
    printf("5 - Paridade e primalidade\n");
    printf("6 - Distancia entre dois pontos\n");
    printf("7 - Numeros em ordem consecutiva\n\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){

        case 1:
        {
            int i, j, aux, v[100];

            for (i = 0; i < 100; i++){
                printf("Entre com o numero %d: ", i + 1);
                scanf("%d", &v[i]);
            }

            printf("\nOrdem inversa:\n");
            for (i = 99; i >= 0; i--){
                printf("%d ", v[i]);
            }
            printf("\n");

            for (i = 0; i < 100; i++){
                for (j = 0; j < 99 - i; j++){
                    if (v[j] < v[j + 1]){
                        aux = v[j];
                        v[j] = v[j + 1];
                        v[j + 1] = aux;
                    }
                }
            }

            printf("\nOrdenados do maior para o menor:\n");
            for (i = 0; i < 100; i++){
                printf("%d ", v[i]);
            }
            printf("\n");
            break;
        }

        case 2:
        {
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
            break;
        }

        case 3:
        {
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
            break;
        }

        case 4:
        {
            int i, maior, v[10];

            for (i = 0; i < 10; i++){
                printf("Entre com o valor %d: ", i + 1);
                scanf("%d", &v[i]);
            }

            maior = v[0];    

            for (i = 1; i < 10; i++){
                
                maior = (maior + v[i] + abs(maior - v[i])) / 2;
            }

            printf("%d eh o maior\n", maior);
            break;
        }

        case 5:
        {
            int i, d, primo, v[100];

            for (i = 0; i < 100; i++){
                printf("Entre com o numero %d: ", i + 1);
                scanf("%d", &v[i]);
            }

            printf("\n");

            for (i = 0; i < 100; i++){


                if (v[i] % 2 == 0){
                    printf("%d e par", v[i]);
                }
                else{
                    printf("%d e impar", v[i]);
                }

                
                if (v[i] < 2){
                    primo = 0;    
                }
                else{
                    primo = 1;    
                    for (d = 2; d * d <= v[i]; d++){
                        if (v[i] % d == 0){
                            primo = 0;
                        }
                    }
                }

                if (primo == 1){
                    printf(" e primo\n");
                }
                else{
                    printf(" e nao e primo\n");
                }
            }
            break;
        }

        case 6:
        {
            int x1, x2, y1, y2;
            float d, cat1, cat2;

            printf("Entre com as coordenadas do p1 (x1 y1): ");
            scanf("%d %d", &x1, &y1);

            printf("Entre com as coordenadas do p2 (x2 y2): ");
            scanf("%d %d", &x2, &y2);

            cat1 = pow(x2 - x1, 2);
            cat2 = pow(y2 - y1, 2);

            d = sqrt(cat1 + cat2);

            printf("A distancia entre os dois pontos e de %.2f\n", d);
            break;
        }

        case 7:
        {
            int i, encontrou, v[100];

            for (i = 0; i < 100; i++){
                printf("Entre com o numero %d: ", i + 1);
                scanf("%d", &v[i]);
            }

            printf("\n");

            encontrou = 0;
            i = 0;

            while (i < 99){
                if (v[i + 1] == v[i] + 1){
                    
                    printf("Consecutivos: %d", v[i]);

                    while (i < 99 && v[i + 1] == v[i] + 1){
                        i++;
                        printf(" %d", v[i]);
                    }

                    printf("\n");
                    encontrou = 1;
                }
                else{
                    i++;
                }
            }

            if (encontrou == 0){
                printf("Nenhum numero em ordem consecutiva.\n");
            }
            break;
        }

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
